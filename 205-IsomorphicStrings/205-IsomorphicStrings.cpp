// Last updated: 4/1/2026, 7:38:46 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<s.size();i++){
            int p = s[i];
            int q = t[i];
            if(mp1.count(p) && mp1[p] != q) return false;
            if(mp2.count(q) && mp2[q] != p) return false;
            mp1[p] = q;
            mp2[q]= p;
        }
        return true;
    }
};