// Last updated: 4/1/2026, 7:37:06 PM
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        int n = nums.size();

        unordered_map<int, long long> leftFreq, rightFreq;
        for (int x : nums) rightFreq[x]++;
        long long result = 0;
        for (int j = 0; j < n; j++) {
            int x = nums[j];
            long long need = 2LL * x;
            rightFreq[x]--;
            if (leftFreq.count(need) && rightFreq.count(need)) {
             result = (result + leftFreq[need] * rightFreq[need]) % MOD;
            }
            leftFreq[x]++;
        }
        return (int)result;
    }
};
