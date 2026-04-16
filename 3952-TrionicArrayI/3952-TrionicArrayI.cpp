// Last updated: 4/16/2026, 11:33:34 PM
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0;
        int q = 0;
        int r = 0;
        int n = nums.size();
        while(p+1 <n && nums[p] < nums[p+1]) p++;
        if(p == 0) return false;
        q = p;
        while(q+1 <n && nums[q] > nums[q+1]) q++;
        if(q == p) return false;
        if(q!=n-1) r =q;
        while(r+1 <n && nums[r] < nums[r+1]) r++;
        
        return r==n-1;
    } 
};