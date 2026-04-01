// Last updated: 4/1/2026, 7:38:33 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int l =0;
        int r =n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] > mid) r =mid-1;
            else l =mid+1;
         }
        return l;
    }
};