// Last updated: 4/1/2026, 7:39:05 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int elem;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second  == 1){
                elem = it.first;
                break;
            }
        }
        return elem;
    }
};    