// Last updated: 4/1/2026, 7:38:13 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                // if(count > maxCount){
                //     maxCount = count;
                // }
                maxCount = max(maxCount,count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};
