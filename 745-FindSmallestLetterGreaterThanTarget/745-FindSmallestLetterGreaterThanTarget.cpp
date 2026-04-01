// Last updated: 4/1/2026, 7:38:04 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        char ch = letters[low];
        while(low<=high){
            int mid = low + (high-low)/2;
            if(letters[mid] > target){
                high = mid-1;
                ch = letters[mid];
            }
            else{
                low = mid+1;
            }
        }
        return ch;
    }
};