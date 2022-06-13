class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> curr;
        
        combinations(result, curr, 1, k, n);
        return result;
    }
    
    void combinations(vector<vector<int>>& result, vector<int>& curr, int i, int k, int n) {
        if(curr.size() == k)
            result.push_back(curr);
        else {
            for(int j = i; j <= n; ++j) {
                curr.push_back(j);
                combinations(result, curr, j+1, k, n);
                curr.pop_back();
            }
        }
    }
};