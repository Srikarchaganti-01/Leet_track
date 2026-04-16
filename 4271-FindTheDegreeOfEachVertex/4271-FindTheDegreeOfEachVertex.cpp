// Last updated: 4/16/2026, 11:33:19 PM
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            int deg = 0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]) deg++;
            }
            v.push_back(deg);
        }
        return v;
    }
};