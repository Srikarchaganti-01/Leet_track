// Last updated: 4/1/2026, 7:39:09 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int low = INT_MAX;
        int maxpro = 0;
        for(int i=0;i<n;i++){
            if(prices[i]<low){
                low = prices[i];
            }
            maxpro = max(maxpro,prices[i]-low);
        }
        return maxpro;
    }
};