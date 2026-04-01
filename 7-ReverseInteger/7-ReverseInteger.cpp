// Last updated: 4/1/2026, 7:39:59 PM
class Solution {
public:
    int reverse(int x) {
         int dig;
         long long rev =0;
        while(x!=0){
            dig = x%10;
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0;
            }
            rev = rev * 10 + dig;
               
            x=x/10;
        }
        return rev;
    }
};