// Last updated: 4/1/2026, 7:38:31 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0 ){
                swap(nums[i] , nums[j]);
                j++;
            }            
        }
    }
};