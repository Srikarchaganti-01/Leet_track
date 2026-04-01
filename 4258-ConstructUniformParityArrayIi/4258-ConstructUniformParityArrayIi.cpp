// Last updated: 4/1/2026, 7:36:59 PM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int n = nums1.size();
        if(n == 1) return true;
        int odd = 0, even = 0;
        int mn = INT_MAX;
        for(int x : nums1){
            if(x % 2) odd++;
            else even++;
            mn = min(mn, x);
        }
        if(odd == 0 || even == 0) return true;
        if(mn % 2 == 1) return true;
        return false;
    }
};