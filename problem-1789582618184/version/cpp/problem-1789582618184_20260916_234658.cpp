// Last updated: 9/16/2026, 11:46:58 PM
1class Solution {
2public:
3    int maximumGap(string skill, string station) {
4        int n = skill.size();
5        int m = station.size();
6        vector<int> left(n);
7        vector<int> right(n);
8        int j = 0;
9        for(int i = 0; i < n; i++) {
10            while(station[j] != skill[i]) {j++;}
11            left[i] = j;
12            j++;
13        }
14        j = m - 1;
15        for(int i = n - 1; i >= 0; i--) {
16            while(station[j] != skill[i]) {j--;}
17            right[i] = j;
18            j--;
19        }
20        int maxi = 0;
21        for(int i = 0; i < n - 1; i++) {
22            int dist = right[i + 1] - left[i];
23            maxi = max(maxi, dist);
24        }
25        return maxi;
26    }
27};