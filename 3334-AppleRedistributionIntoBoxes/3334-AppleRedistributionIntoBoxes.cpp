// Last updated: 4/1/2026, 7:37:09 PM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int apples = 0;
        for(int i=0;i<apple.size();i++){
            apples = apples + apple[i];
        }
        int count = capacity[0];
        int i;
        for( i=0;i<capacity.size();i++){
            if(count >= apples){
                break;
            }else if(count < apples && i<capacity.size()){
                count  = count + capacity[i+1];
            }else{
                return -1;
            }
        }
        return i+1;
    }
};