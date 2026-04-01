// Last updated: 4/1/2026, 7:39:11 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
        int n = rowIndex;
        vector<int>v;
        v.push_back(ans);
        for(int i=0;i<n;i++){
            if(n==0) break;
            ans = ans * (n-i);
            ans = ans / (i+1);
            v.push_back(ans); 
        }
        return v;
    }
};