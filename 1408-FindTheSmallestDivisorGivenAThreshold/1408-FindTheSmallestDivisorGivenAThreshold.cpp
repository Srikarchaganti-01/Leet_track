// Last updated: 4/1/2026, 7:37:50 PM
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = nums[n-1];
        int ans =  high;
        while(low<=high){
            int mid = low + (high - low)/2;

            int res =0;
            for(int j = 0;j<n;j++){
                res =  res +ceil((double) nums[j] / mid); 
            }
            if(res <= threshold ){
                ans = mid;
                high = mid -1;
            }
             if (res > threshold){
                low = mid + 1;
             }
        }
        return ans;
    }
};