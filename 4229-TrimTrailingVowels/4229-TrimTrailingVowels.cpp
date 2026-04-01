// Last updated: 4/1/2026, 7:37:01 PM
class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s.pop_back();
            }
            else{
                break;
            }
        }
        return s;
    }
};