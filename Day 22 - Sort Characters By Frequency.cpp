#include<bits/stdc++.h>
class Solution {
public:
    int alpha[256] = {0};
    bool compare(char &a, char &b){        
        return alpha[a]>alpha[b];
    }
    
    string frequencySort(string s) {
        for(char c:s){
            alpha[c]++;
        }
        sort(s.begin(), s.end(), [this](char &a, char &b){
           return compare(a,b); 
        });
        string res="";
        
        for(char c:s){
            while(alpha[c]){
                res+=c;
                alpha[c]--;
            }    
        }
        
        return res;
    }
};
