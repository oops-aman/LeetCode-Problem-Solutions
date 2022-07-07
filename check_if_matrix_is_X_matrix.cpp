class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
            for(int i = 0; i < n; i++) {
            for(int j = 0; j <= (n - 1) / 2; j++) {
                if(j == i || j == n - 1 - i) {
                    if(grid[i][j] == 0 || grid[i][n - 1 - j] == 0) {
                        return false;
                    }
                }
                else {
                    if(grid[i][j] != 0 || grid[i][n - 1 - j] != 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};