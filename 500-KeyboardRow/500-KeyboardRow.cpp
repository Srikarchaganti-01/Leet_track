// Last updated: 4/1/2026, 7:38:12 PM
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char>r1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char>r2 = {'a','s','d','f','g','h','j','k','l'};
        set<char>r3 = {'z','x','c','v','b','n','m'};
        vector<string> res;
        for(int i=0;i<words.size();i++){
            set<char> st;
            bool ss1 = false;
            bool ss2 = false;
            bool ss3 = false;
            for(int j=0;j<words[i].size();j++){
                char ch = tolower(words[i][j]);
                st.insert(ch);
            }
            ss1 = includes(r1.begin(),r1.end(),st.begin(),st.end());
            ss2 = includes(r2.begin(),r2.end(),st.begin(),st.end());
            ss3 = includes(r3.begin(),r3.end(),st.begin(),st.end());
            if(ss1 == true || ss2 == true || ss3 == true) res.push_back(words[i]);
        }
        return res;
    }
};