// Last updated: 4/1/2026, 7:38:28 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3 == 0){
            n = n/3;
        }
        return n==1;
    }
};