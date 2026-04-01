// Last updated: 4/1/2026, 7:37:41 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            v.push_back(sum);
        }
        return v;
    }
};