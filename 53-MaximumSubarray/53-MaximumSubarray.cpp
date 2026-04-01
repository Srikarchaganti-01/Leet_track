// Last updated: 4/1/2026, 7:39:32 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int sum = 0;
        int start = 0, end = 0;
        int tempStart = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > maxsum) {
                maxsum = sum;
                start = tempStart;
                end = i;
            }
            if(sum < 0) {
                sum = 0;
                tempStart = i + 1;
            }
        }
        // cout << "Subarray starts at index: " << start << endl;
        // cout << "Subarray ends at index: " << end << endl;

        return maxsum;
    }
};
