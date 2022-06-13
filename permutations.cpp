class Solution {
public:
    int ComputeFactorial(int size) {
        int factorial = 1;
        for (int i = 1; i <= size; ++i) {
            factorial *= i;
        }
        return factorial;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> result;
        result.reserve(ComputeFactorial(nums.size()));
        result.push_back(nums);
        
        while(next_permutation(nums.begin(), nums.end())) {
            result.push_back(nums);    
        }
        
        return result;
    }
};