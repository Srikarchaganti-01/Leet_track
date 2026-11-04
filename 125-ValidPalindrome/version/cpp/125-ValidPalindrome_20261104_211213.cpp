// Last updated: 11/4/2026, 9:12:13 PM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string result = "";
5        for (int i = 0; i < s.size(); i++) {
6            if (isalnum(s[i])) {
7                if (s[i] >= 'A' && s[i] <= 'Z') {
8                    result += s[i] + 32;
9                } else {
10                    result += s[i];
11                }
12            }
13        }
14        int left = 0, right = result.size() - 1;
15        while (left < right) {
16            if (result[left] != result[right]) {
17                return false;
18            }
19            left++;
20            right--;
21        }
22        return true;
23    }
24};
25