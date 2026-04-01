// Last updated: 4/1/2026, 7:38:36 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (t == s);
    }
};