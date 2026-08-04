// Last updated: 8/4/2026, 7:01:11 PM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> v;
7        int j = nums[0];
8
9        for (int i = 0; i < nums.size(); i++) {
10            while (j < nums[i]) {
11                v.push_back(j);
12                j++;
13            }
14            j = nums[i] + 1;
15        }
16
17        return v;
18    }
19};