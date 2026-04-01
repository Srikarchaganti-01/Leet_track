// Last updated: 4/1/2026, 7:37:02 PM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int count = n;
        if(nums[n-1] <= 1LL*nums[i]*k) return 0;
        for (int j = 0; j < n; j++) {
            while (nums[j] > 1LL * nums[i] * k) {
                i++;
            }
            count = min(count, n - (j - i + 1));
        }
        return count;
    }
};