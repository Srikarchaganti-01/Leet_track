// Last updated: 4/1/2026, 7:37:08 PM
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        for(int i = 0; i < n; i++){
            int j = ((i + nums[i]) % n + n) % n;
            res[i] = nums[j];
        }

        return res;
    }
};
