// Last updated: 7/10/2026, 9:33:02 PM
1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4
5        sort(intervals.begin(), intervals.end(),
6            [](vector<int>& a, vector<int>& b){
7                if(a[0] == b[0])
8                    return a[1] > b[1];
9                return a[0] < b[0];
10            });
11
12        int count = 0;
13        int maxEnd = 0;
14
15        for(auto &x : intervals){
16            if(x[1] > maxEnd){
17                count++;
18                maxEnd = x[1];
19            }
20        }
21
22        return count;
23    }
24};