// Last updated: 4/1/2026, 7:39:25 PM
class Solution {
public:
    int mySqrt(int x) {
       int low = 0;
       int high = x;
       int ans = 0;
       if(x == 1) return 1;
       while(low<=high){
        long long mid = low+ (high-low)/2;
        if(mid*mid <= x) {
            low = mid + 1;
            ans = mid;
        }
        if(mid*mid > x) high = mid -1;
       } 
       return ans;
    }
};