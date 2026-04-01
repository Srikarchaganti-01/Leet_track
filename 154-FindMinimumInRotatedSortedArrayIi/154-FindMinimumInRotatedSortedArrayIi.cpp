// Last updated: 4/1/2026, 7:39:00 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};