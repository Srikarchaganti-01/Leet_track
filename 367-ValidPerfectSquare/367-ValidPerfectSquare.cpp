// Last updated: 4/1/2026, 7:38:22 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        double n = sqrt(num);
        return (n == int(n));
    }
};