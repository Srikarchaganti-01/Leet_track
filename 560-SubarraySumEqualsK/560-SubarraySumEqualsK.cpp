// Last updated: 4/1/2026, 7:38:07 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int pre = 0;
        map<int,int>mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            pre = pre + nums[i];
            int rem = pre - k ;
            count  = count + mp[rem];
            mp[pre] += 1;
        }
        return count;
    }
};