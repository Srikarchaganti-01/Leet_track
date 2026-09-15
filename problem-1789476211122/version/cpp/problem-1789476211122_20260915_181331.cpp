// Last updated: 9/15/2026, 6:13:31 PM
1class Solution {
2public:
3    long long maxPairStrength(vector<int>& nums) {
4        long long maxi = INT_MIN;
5        for(int i=0;i<nums.size();i++){
6            for(int j=0;j<nums.size();j++){
7                if(i == j) continue;
8                long long num = 1ll * nums[i] * nums[j];
9                int den = gcd(nums[i],nums[j]);
10                long long denum = 1ll * pow(den,2);
11                long long res = num/denum;
12                maxi = max(res,maxi);
13            }
14        }
15        return maxi;
16    }
17};