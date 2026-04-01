// Last updated: 4/1/2026, 7:37:36 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= k) k++;
            else break;
        }
        return k;
    }
};