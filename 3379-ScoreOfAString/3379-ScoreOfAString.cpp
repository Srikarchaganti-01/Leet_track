// Last updated: 4/16/2026, 11:33:39 PM
class Solution {
public:
    int scoreOfString(string s) {
        vector<int>v;
        for(int i = 0;i<s.size();i++){
            int val = s[i];
            v.push_back(val);
        }
        int res = 0;
        for(int i = 0;i<v.size()-1;i++){
            int diff = abs(v[i] - v[i+1]);
            res = res + diff;
        }
        return res;
    }
};