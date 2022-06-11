class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int m = grid.size(), n = grid[0].size(), fresh = 0, time = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 2) q.push({i, j});
                else if(grid[i][j] == 1) fresh++;
            }
        }
        
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; ++i) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                if(x > 0 and grid[x-1][y] == 1) {
                    grid[x-1][y] = 2;
                    fresh--;
                    q.push({x-1, y});
                }
                if(y > 0 and grid[x][y-1] == 1) {
                    grid[x][y-1] = 2;
                    fresh--;
                    q.push({x, y-1});
                }
                if(x < m-1 and grid[x+1][y] == 1) {
                    grid[x+1][y] = 2;
                    fresh--;
                    q.push({x+1, y});
                }
                
                if(y < n-1 and grid[x][y+1] == 1) {
                    grid[x][y+1] = 2;
                    fresh--;
                    q.push({x, y+1});
                }
            }
            if(!q.empty()) {
                time++;
            }
        }
        return (fresh == 0) ? time : -1;
    }
};