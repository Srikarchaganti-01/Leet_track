// Last updated: 4/1/2026, 7:37:55 PM
class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        return fib(n-1) + fib(n-2);
        
    }
};