// Last updated: 4/1/2026, 7:37:04 PM
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine,    vector<bool>& isActive) {
        int n = code.size();
        int m = businessLine.size();
        int p = isActive.size(); 
        vector<string> v;
         vector<pair<int,string>> temp; 
        for(int i=0;i<n;i++){
            if (businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant"){
                if(code[i].size() == 0){
                    continue;
                }
                bool valid = true;
                for(int j=0;j<code[i].size();j++){
                    char c = code[i][j];
                    if(!((c >= 'a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || (c == '_'))){
                        valid = false;
                        break;
                    }
                }
                if( valid && isActive[i] == true){
                    int priority;
                    if (businessLine[i] == "electronics") priority = 0;
                    else if (businessLine[i] == "grocery") priority = 1;
                    else if (businessLine[i] == "pharmacy") priority = 2;
                    else priority = 3;
                    temp.push_back({priority,code[i]});
                }
            }
        }
        sort(temp.begin(), temp.end());
        for(auto &x : temp){
            v.push_back(x.second);
        }
        return v;
    }
};