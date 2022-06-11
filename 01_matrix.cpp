class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(col, INT_MAX));
        vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
        
        queue<pair<int, int>> q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0) {
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            for(int d=0;d<4;d++){
                int x = i+dir[d].first;
                int y = j+dir[d].second;
                if(x>=0 and y>=0 and x<row and y<col and ans[i][j]+1<ans[x][y]){
                    ans[x][y] = ans[i][j]+1;
                    q.push({x, y});
                }
            }
            q.pop();
        }
        return ans;
    }
};