// Last updated: 4/1/2026, 7:38:30 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second > 1) return it.first;
        }
        return -1;
    }
};