class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        
        fill(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
    void fill(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
        int n = image.size();
        int m = image[0].size();
        
        if(sr < 0 || sc < 0 || sr >= n || sc >= m || oldColor != image[sr][sc]) {
            return ;
        }
        
        image[sr][sc] = newColor;
        fill(image, sr + 1, sc, newColor, oldColor);
        fill(image, sr - 1, sc, newColor, oldColor);
        fill(image, sr, sc + 1, newColor, oldColor);
        fill(image, sr, sc - 1, newColor, oldColor);
    }
};