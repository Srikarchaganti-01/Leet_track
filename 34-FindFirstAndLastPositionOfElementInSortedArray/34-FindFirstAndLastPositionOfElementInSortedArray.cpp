// Last updated: 4/1/2026, 7:39:39 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n==0) return {-1,-1};
        int l=0;
        int r =n-1;
        int first =-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                first = mid;
                r = mid-1;
            }
            else if(nums[mid] < target) l = mid + 1;
            else if(nums[mid] > target) r = mid -1;
        }
        if (first == -1) return {-1,-1};
        int l2 =0;
        int r2 =n-1;
        int last =-1;
        while(l2<=r2){
            int mid = l2 + (r2-l2)/2;
            if ( nums[mid] == target) {
                last = mid ;
                l2 = mid +1;
            }
            else if (nums[mid] < target) l2  = mid+1;
            else if (nums[mid] > target) r2 = mid-1; 
        }
        return {first,last};
    }
};
