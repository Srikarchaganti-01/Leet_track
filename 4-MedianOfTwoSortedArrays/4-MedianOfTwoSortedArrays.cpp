// Last updated: 4/1/2026, 7:40:01 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if(v.size() % 2 != 0) {
            double mid = (v.size() / 2);
            return v[mid];
        }
        else{
            int low =(v.size() / 2) - 1;
            int high = (v.size() / 2);
            double oute = (v[low] + v[high]) / 2.0;
            return oute;
        }

    }
};