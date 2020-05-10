class Solution {
public:
    #include <bits/stdc++.h>
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustNos(N,0);
        map<int, vector<int> > trusts;
        for(int i=0; i<trust.size(); i++){
            trusts[trust[i][0]].push_back(trust[i][1]);
            trustNos[trust[i][1]-1]++;
        }
        for(int i=0; i<N; i++){
            if(trustNos[i]==N-1 && trusts.count(i+1)==0) return i+1;
        }
        return -1;
    }
};
