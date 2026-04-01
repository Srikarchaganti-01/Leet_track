// Last updated: 4/1/2026, 7:37:54 PM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = reduce(weights.begin(),weights.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            int cap = mid;
            int day = 1;
            int tempcap = cap;
            int k = 0;
            while(k < weights.size()){
                if(tempcap >= weights[k]) {
                    tempcap = tempcap - weights[k];
                    k++;
                }
                else if(tempcap < weights[k]){
                    day++;
                    tempcap = cap - weights[k];
                    k++;
                }
            }
            if(day <= days) {
                ans = mid;
                high = mid -1;
            } 
            if(day > days){
                low = mid + 1;
            }
        }
        return ans;
    }
};