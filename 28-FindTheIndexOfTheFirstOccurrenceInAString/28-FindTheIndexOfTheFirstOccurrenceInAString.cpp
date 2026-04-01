// Last updated: 4/1/2026, 7:39:44 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(m>n) return -1;
        
        int i=0;
        for(i=0;i<n-m+1;i++){
            int count = 0;
            if(haystack[i] == needle[0]){
                for(int j=0;j<m;j++){
                    if(haystack[j+i] == needle[j]){
                        count++;
                    }else{
                        break;
                    }
                }
                if(count == m ) return i;
            }
        }
        
        return -1;
    }
};