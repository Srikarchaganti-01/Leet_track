// Last updated: 10/24/2026, 2:27:32 PM
1class Solution {
2public:
3    int maxDistance(string moves) {
4        int count = 0;
5        int vc = 0;
6        int hc = 0;
7
8        for(int i = 0; i < moves.size(); i++) {
9            char ch = moves[i];
10
11            if(ch == '_') {
12                count++;
13                continue;
14            }
15
16            switch(ch) {
17                case 'U':
18                    vc++;
19                    break;
20                case 'D':
21                    vc--;
22                    break;
23                case 'L':
24                    hc++;
25                    break;
26                case 'R':
27                    hc--;
28                    break;
29            }
30        }
31
32        int ans = abs(vc) + abs(hc) + count;
33        return ans;
34    }
35};