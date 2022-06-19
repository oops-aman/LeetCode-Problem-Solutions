class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = 0;
        for(int i = 0; i < n; i++) {
            int product = 0;
            for(int j = 0; j < n and j != i; j++) {
                product = (nums[i]-1)*(nums[j]-1);
                maxProd = max(maxProd, product);
            }
        }
        return maxProd;
    }
};