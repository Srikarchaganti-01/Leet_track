// Last updated: 4/1/2026, 7:37:44 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
        }
        return v;
    }
};