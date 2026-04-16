// Last updated: 4/16/2026, 11:33:52 PM
class Solution {
public:
    bool checkString(string s) {
        bool B = false;
        int i = 0;
        while(i<s.size()){
            if(s[i] == 'a' && B) return false;
            if(s[i] == 'b') B = true;
            i++;
        }
        return true;
    }
};