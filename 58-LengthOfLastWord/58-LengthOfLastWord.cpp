// Last updated: 4/1/2026, 7:39:30 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size()-1;
        for(int i=n;i>=0;){
            while(i>=0 && s[i] == ' '){
                i--;
            }
            while(i>=0 && s[i] != ' '){
                count++;
                i--;
            }
            break;
        }
        return count;
    }
};