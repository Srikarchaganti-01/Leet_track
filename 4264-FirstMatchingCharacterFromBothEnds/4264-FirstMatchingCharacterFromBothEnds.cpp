// Last updated: 4/16/2026, 11:33:20 PM
class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int i=0;
        int left = i;
        int right = n-i-1;
        while(left <= right){
            if(s[left] == s[right]) return left;
            left++;
            right--;
        }
        return -1;
    }
};