// Last updated: 4/16/2026, 11:34:07 PM
class Solution {
public:
    int countLargestGroup(int n) {
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int sum =0;
            int x =i;
            while( x > 0){
                int m = x % 10;
                sum = sum + m;
                x = x / 10;
            }
            mp[sum]++;
        }
        
        int maxfreq = INT_MIN;
        for(auto it:mp){
            maxfreq = max(it.second,maxfreq);
        }
        int count =0;
        for(auto it:mp){
            if(it.second == maxfreq) count++;
        }
        return count;
    }
};