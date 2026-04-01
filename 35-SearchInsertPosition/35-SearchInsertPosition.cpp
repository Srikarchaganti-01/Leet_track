// Last updated: 4/1/2026, 7:39:37 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left =0;
        int right =nums.size()-1;
        int mid =0;
        while(left<=right){
            mid = left + (right-left)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) left = mid+1;
            else if(target < nums[mid]) right = mid -1;
        }


        
        return left;
    }
};
