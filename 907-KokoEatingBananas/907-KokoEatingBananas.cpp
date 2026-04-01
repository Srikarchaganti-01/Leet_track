// Last updated: 4/1/2026, 7:37:59 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int high  = piles[n-1];
        int low = 1;
        int ans =0;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long hr = 0;
            for(int p:piles) hr = hr + (p + mid - 1)/mid;
            if(hr <= h) {
                ans = mid;
                high = mid-1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};