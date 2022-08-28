class Solution {
public:
    void sort(vector<vector<int>> &mat, int I, int J) {
        int n = mat.size(), m = mat[0].size();
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int i = I, j = J;
        while(i < n and j < m) {
            minHeap.push(mat[i][j]);
            i++;
            j++;
        }
        while(!minHeap.empty()) {
            mat[I][J] = minHeap.top();
            I++;
            J++;
            minHeap.pop();
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i = 0; i < mat.size(); i++)
            sort(mat, i, 0);
        for(int j = 0; j < mat[0].size(); j++)
            sort(mat, 0, j);
        
        return mat;
    }
};