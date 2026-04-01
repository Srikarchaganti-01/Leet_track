// Last updated: 4/1/2026, 7:37:18 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);

        int pos = 0, neg = 0;
        for(int x : nums){
            if(x > 0) pos++;
            else neg++;
        }

        int pin, nin;
        if(pos >= neg){
            pin = 0;
            nin = 1;
        } else {
            pin = 1;
            nin = 0;
        }

        for(int x : nums){
            if(x > 0){
                if(pin < n){
                    v[pin] = x;
                    pin += 2;
                }
            } else {
                if(nin < n){
                    v[nin] = x;
                    nin += 2;
                }
            }
        }

        return v;
    }
};
