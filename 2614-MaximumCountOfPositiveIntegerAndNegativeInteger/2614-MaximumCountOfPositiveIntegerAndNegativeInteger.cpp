// Last updated: 4/1/2026, 7:37:13 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cpos = 0;
        int npos = 0;
        int maxc = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0 ) cpos++;
            else if(nums[i] < 0) npos++;
        }
        return max(cpos,npos);
    }
};