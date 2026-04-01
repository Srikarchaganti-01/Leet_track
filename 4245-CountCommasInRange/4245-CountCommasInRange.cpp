// Last updated: 4/1/2026, 7:36:56 PM
class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0;
        return n-1000 + 1;
    }
};