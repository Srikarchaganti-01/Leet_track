// Last updated: 4/1/2026, 7:39:45 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            }
        }
        return nums.size();
    }
};