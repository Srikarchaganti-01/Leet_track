// Last updated: 4/16/2026, 11:33:46 PM
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>v(n);
        int count =0 ;
        for(int i=0;i<n;i++){
            int count =0;
            for(int j=0;j<=i;j++){
                int a = A[j];
                for(int k = 0;k<=i;k++){
                    int b = B[k];
                    if(a == b) count++;
                }
            }
            v[i] = count;
        }
        return v;
    }
};