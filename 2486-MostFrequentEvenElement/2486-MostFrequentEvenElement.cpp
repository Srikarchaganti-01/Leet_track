// Last updated: 4/1/2026, 7:37:15 PM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mcount = 0;
        int melem = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                int j=i;
                while(j<nums.size() && nums[i] == nums[j]){
                    j++;
                }
                int count = j-i;
                if(count > mcount){
                    mcount =count;
                    melem = nums[i];
                }
                i = j-1;
            }
            
        }
        return melem;
    }
};