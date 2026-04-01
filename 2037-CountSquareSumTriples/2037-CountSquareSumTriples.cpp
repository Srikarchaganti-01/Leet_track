// Last updated: 4/1/2026, 7:37:26 PM
class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int c2 = (i*i)+(j*j);
                int c = sqrt(c2);
                if(c<=n && c*c == c2){
                    count++;
                }
            }
        }
        return count;
    }
};