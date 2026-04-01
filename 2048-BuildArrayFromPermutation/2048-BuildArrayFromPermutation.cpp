// Last updated: 4/1/2026, 7:37:24 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[nums[i]]);
        }
        return v;
    }
};