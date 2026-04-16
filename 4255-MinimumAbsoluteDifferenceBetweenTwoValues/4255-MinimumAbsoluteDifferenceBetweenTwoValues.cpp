// Last updated: 4/16/2026, 11:33:27 PM
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int p = nums.size();
        int mini = INT_MAX;
        for (int i = 0;i<p;i++){
            if(nums[i] == 0 ) continue;
            for(int j=i;j<p;j++){
                if((nums[i]==1 && nums[j]==2) || (nums[i] == 2 && nums[j] == 1)){
                    int diff = abs(i-j);
                    mini = min(diff,mini);
                }else continue;
            } 
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};