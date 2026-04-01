// Last updated: 4/1/2026, 7:37:33 PM
class Solution {
public:
    int maxDepth(string s) {
        int maxd = INT_MIN;
        int d = 0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '(') d++;
            if(s[i] == ')') d--;
            if(d>maxd) maxd = d;
        }
        return maxd;
    }
};