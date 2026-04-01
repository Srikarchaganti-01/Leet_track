// Last updated: 4/1/2026, 7:37:31 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int sum = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum = sum + accounts[i][j];
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};