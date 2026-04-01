// Last updated: 4/1/2026, 7:38:10 PM
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum =1;
        if(num == 1) return false;
        for(int i=2;i<=pow(num,0.5);i++){
            if(num%i == 0) {
                sum = sum + i;
                cout<<sum<<" ";
                sum = sum + (num/i);
                cout<<sum<<" ";
            }
        }
        return (sum == num);
    }
};