// Last updated: 10/25/2026, 11:15:22 AM
1class Solution {
2public:
3    int retmaxpos(int n) {
4        vector<int> v;
5        while (n > 0) {
6            int k = n % 10;
7            v.push_back(k);
8            n = n / 10;
9        }
10        sort(v.begin(), v.end(), greater<int>());
11        int num = 0;
12        for (int i = 0; i < v.size(); i++) {
13            num = num * 10 + v[i];
14        }
15        return num;
16    }
17
18    long long maximizeSum(vector<int>& nums, int k) {
19        long long sum = 0;
20        vector<pair<int, int>> v;
21        for (int i = 0; i < nums.size(); i++) {
22            sum += nums[i];
23            int num = retmaxpos(nums[i]);
24            v.push_back({num - nums[i], i});
25        }
26        sort(v.rbegin(), v.rend());
27        for (int i = 0; i < k; i++) {
28            sum += v[i].first;
29        }
30        return sum;
31    }
32};