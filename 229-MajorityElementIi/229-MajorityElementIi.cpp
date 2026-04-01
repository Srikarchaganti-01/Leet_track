// Last updated: 4/1/2026, 7:38:41 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second > m){
                v.push_back(it.first);
            }
        }
        return v;
    }
};