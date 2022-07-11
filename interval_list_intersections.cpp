class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        if(f.size() == 0 or s.size() == 0) return {};
        
        vector<vector<int>> res;
        int i = 0, j = 0;
        while(i < f.size() and j < s.size()) {
            if(f[i][1] >= s[j][0] and f[i][0] <= s[j][1]) {
                int x = max(f[i][0], s[j][0]);
                int y = min(f[i][1], s[j][1]);
                res.push_back({x, y});
            }
            f[i][1] < s[j][1] ? i++ : j++;
        }
        return res;
    }
};