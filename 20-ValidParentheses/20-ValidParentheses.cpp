// Last updated: 4/1/2026, 7:39:48 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> stx;
        for(int i=0;i<s.size();i++){
            char p = s[i];
            if(p == '(' || p == '{' || p == '['){
                stx.push(p);
            }
            else{
                if (stx.empty()) return false;
            
                char top = stx.top();
                stx.pop();
                    if( (p==')' && top!='(') ||(p=='}' && top!='{') ||
                    (p==']' && top!='[') )
                    return false;
            }
        }
        return stx.empty();
    }
};