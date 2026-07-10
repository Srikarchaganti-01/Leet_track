// Last updated: 7/10/2026, 8:45:08 PM
1class Solution {
2public:
3    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
4        sort(arr.begin(), arr.end());
5        arr[0] = 1;
6        for(int i = 1; i < arr.size(); i++) {
7            if(arr[i] > arr[i-1] + 1) arr[i] = arr[i-1] + 1;
8        }
9        return arr.back();
10    }
11};