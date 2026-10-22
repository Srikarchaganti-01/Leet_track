// Last updated: 10/22/2026, 8:24:01 PM
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        map<int,int> mp;
5
6        for(int i = 0; i < arr.size(); i++){
7            mp[arr[i]]++;
8        }
9
10        int i = 1;
11        for(auto& it : mp){
12            it.second = i;
13            i++;
14        }
15
16        for(int i = 0; i < arr.size(); i++){
17            arr[i] = mp[arr[i]];
18        }
19
20        return arr;
21    }
22};