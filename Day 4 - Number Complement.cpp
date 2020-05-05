class Solution {
public:
    #include<bits/stdc++.h>
    int findComplement(int num) {
        int digs = floor(log2(num))+1;
        return (abs(1<<digs)-1)^num;
    }
};
