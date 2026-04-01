// Last updated: 4/1/2026, 7:37:38 PM
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // if(m*k > n) return -1;
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        long long low = mini;
        long long high = maxi;
        long long ans = -1;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(poss(bloomDay,m,k,mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int poss(vector<int>& bloomDay,int m,int k,int d){
        int count = 0;
        int N = 0;
        int n = bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i] <= d) count++;
            else{
                N = N + (count/k);
                count = 0;
            }
        }
        N = N + (count/k);
        return (N >= m);
    }
};