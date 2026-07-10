// Last updated: 7/10/2026, 9:51:04 PM
1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        int num = n;
5        long long sum = 0;
6        string s = "";
7        if(num == 0)return 0;
8        while(num > 0){
9            int k = num%10;
10            sum+=k;
11            if(k>0){
12            string str = to_string(k);
13            s+=str;
14            }
15            num=num/10;
16        }
17        
18        reverse(s.begin(),s.end());
19        
20        long long x = stoi(s);
21        long long ans = x*sum;
22        return ans;
23
24    }
25};