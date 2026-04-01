// Last updated: 4/1/2026, 7:36:53 PM
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini = INT_MAX;
        int minians=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if (capacity[i] >= itemSize && capacity[i]<minians){
                mini =  i;
                minians = capacity[i];
            } 
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};