// Last updated: 7/10/2026, 8:31:24 PM
1class Solution {
2public:
3    int countMajoritySubarrays(vector<int>& nums, int target) {
4        int n = nums.size();
5        int ans =0;
6        for(int i=0;i<n;i++){
7            int count =0;
8            for(int j=i;j<n;j++){
9                if(nums[j] == target)count++;
10                if(count > (j-i+1)/2) ans++;
11                
12            }
13        }
14        return ans;
15    }
16};