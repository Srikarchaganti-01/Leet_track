// Last updated: 4/1/2026, 7:39:36 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i=0;i<9;i++){
            unordered_map<char,int>mp1;
            unordered_map<char,int>mp2;
            for(int j=0;j<9;j++){
                if(board[i][j] != '.') mp1[board[i][j]]++;
                if(board[j][i] != '.') mp2[board[j][i]]++;
                for(auto it:mp1){
                    if(it.second > 1) return false;
                }
                for(auto it:mp2){
                    if(it.second > 1) return false;
                }
            }
        }

        vector<vector<int>> box = {{0,2},{3,5},{6,8}};

        for(int r = 0; r < 9; r += 3){
            for(int c = 0; c < 9; c += 3){
                unordered_map<char,int> mp;
                for(int i = r; i <= r + 2; i++){
                    for(int j = box[c/3][0]; j <= box[c/3][1]; j++){
                        if(board[i][j] == '.') continue;
                        mp[board[i][j]]++;
                        if(mp[board[i][j]] > 1) return false;
                    }
                }
            }
        }
         
        return true;
    }
};