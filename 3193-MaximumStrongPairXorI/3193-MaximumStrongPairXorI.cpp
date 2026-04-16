// Last updated: 4/16/2026, 11:33:41 PM
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
    vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                int a = nums[i];
                int b = nums[j];
                if(abs(a-b) <= min(a,b)){
                    int res = a ^ b;
                    v.push_back(res);
                }
            }
        }
        sort(v.rbegin(),v.rend());
        cout<<v[0];
        if(!v.empty()) return v[0];
        return -1;
    }
};