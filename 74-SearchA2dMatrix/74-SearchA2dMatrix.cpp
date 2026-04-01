// Last updated: 4/1/2026, 7:39:21 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int lrow = 0, rrow = rows - 1;
        int mrow = -1;
        while (lrow <= rrow) {
            int mid = lrow + (rrow - lrow) / 2;
            if (matrix[mid][0] <= target && matrix[mid][cols - 1] >= target) {
                mrow = mid;
                break;
            } 
            else if (matrix[mid][0] > target) rrow = mid - 1;
            else if (matrix[mid][0] < target) lrow = mid + 1;
        }
        if (mrow == -1) return false;
        int lcol = 0, rcol = cols - 1;
        while (lcol <= rcol) {
            int mcol = lcol + (rcol - lcol) / 2;
            if (matrix[mrow][mcol] == target) return true;
            else if (matrix[mrow][mcol] > target) rcol = mcol - 1;
            else if (matrix[mrow][mcol] < target) lcol = mcol + 1;
        }
        return false;
    }
};