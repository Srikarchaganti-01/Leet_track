// Last updated: 4/16/2026, 11:33:57 PM
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int a  = nums[i];
            for(int j=i+1;j<nums.size();j++){
                int b = nums[j];
                for(int k=j+1;k<nums.size();k++){
                    int c = nums[k];
                    for(int l=k+1;l<nums.size();l++){
                        int d = nums[l];
                        if((a+b+c) == d) res++;
                    }
                }
            }
        }
        return res;
    }
};