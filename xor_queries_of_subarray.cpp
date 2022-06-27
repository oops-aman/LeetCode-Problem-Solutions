class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;
        int n = queries.size();
        for(int i = 1; i < arr.size(); i++){
            arr[i] ^= arr[i-1]; 
        }
        for(int i = 0; i < n; i++) {
            if(queries[i][0] == 0) result.push_back(arr[queries[i][1]]);
            else result.push_back((arr[queries[i][1]] ^ arr[queries[i][0]-1]));
        }
        return result;
    }
};