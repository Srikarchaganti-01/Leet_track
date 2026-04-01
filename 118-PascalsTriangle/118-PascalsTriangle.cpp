// Last updated: 4/1/2026, 7:39:13 PM
class Solution {
public:
        vector<int> getRow(int rowIndex) {
            long long ans = 1;
            int n = rowIndex;
            vector<int>v;
            v.push_back(ans);
            for(int i=0;i<n;i++){
                ans = ans * (n-i);
                ans = ans / (i+1);
                v.push_back(ans); 
            }
            return v;
        }
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>b;
        for(int i=0;i<numRows;i++){
            b.push_back(getRow(i));
        }
        return b;
    }
};