// Last updated: 6/30/2026, 7:14:36 AM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int apos = -1, bpos = -1, cpos = -1;
5        int count = 0;
6
7        for(int i = 0; i < s.size(); i++){
8            if(s[i] == 'a') apos = i;
9            if(s[i] == 'b') bpos = i;
10            if(s[i] == 'c') cpos = i;
11
12            if(apos != -1 && bpos != -1 && cpos != -1){
13                count += 1 + min(apos, min(bpos, cpos));
14            }
15        }
16
17        return count;
18    }
19};