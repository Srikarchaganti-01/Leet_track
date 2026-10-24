// Last updated: 10/24/2026, 2:14:49 PM
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        long long ssum = 0;
5        long long dsum = 0;
6        while(n>0){
7            int num = n%10;
8            ssum = (num*num)+ssum;
9            dsum = num + dsum;
10            n = n/10;
11        }
12        if((ssum - dsum) >= 50) return true;
13        return false;
14    }
15};