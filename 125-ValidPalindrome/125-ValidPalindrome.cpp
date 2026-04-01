// Last updated: 4/1/2026, 7:39:08 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    result += s[i] + 32;
                } else {
                    result += s[i];
                }
            }
        }
        int left = 0, right = result.size() - 1;
        while (left < right) {
            if (result[left] != result[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
