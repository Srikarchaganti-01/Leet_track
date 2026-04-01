// Last updated: 4/1/2026, 7:38:06 PM
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            int j = i;
            bool flag = true;
            // if(j % 10 == 0) flag = false;
            while(j && flag){
                if(j % 10 == 0) flag = false;
                int n = j % 10;
                if(flag && i%n != 0){
                    flag = false;
                    break;
                }
                j= j / 10;
            }
            if(flag) v.push_back(i);
        }
        return v;
    }
};