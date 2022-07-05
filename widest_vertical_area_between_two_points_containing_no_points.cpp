class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res = 0;
        sort(begin(points), end(points));
        for(int i = 1; i < points.size(); i++) {
            res = max(res, (points[i][0] - points[i-1][0]));
        }
        return res;
    }
};