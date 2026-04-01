// Last updated: 4/1/2026, 7:39:23 PM
class Solution {
public:
    int climbStairs(int n) {
        int i=3;
        int pre1 = 2;
        int pre2 = 1;
        if(n<=2) return n;
        while(i<=n){
            int curr = pre1 + pre2;
            pre2 = pre1;
            pre1 = curr;
            i++;
        }
    return pre1;
    }
};