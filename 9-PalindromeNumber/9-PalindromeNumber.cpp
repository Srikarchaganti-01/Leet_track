// Last updated: 4/1/2026, 7:39:56 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        long long rev = 0;
        while (x != 0) {
            int digit = x % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
                return false;
            }
            rev = rev * 10 + digit;
            x /= 10;
        }
        return rev == original;
    }
};
