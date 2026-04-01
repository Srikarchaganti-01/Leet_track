// Last updated: 4/1/2026, 7:38:39 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n%2 == 0){
            n = n/2;
        }
        return n==1;
    }
};