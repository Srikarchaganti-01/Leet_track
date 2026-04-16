// Last updated: 4/16/2026, 11:33:44 PM
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        while(k>0){
            int m = nums.back();
            sum = sum + m;
            m++;
            nums.pop_back();
            nums.push_back(m);
            k--;
        }
        return sum;
    }
};