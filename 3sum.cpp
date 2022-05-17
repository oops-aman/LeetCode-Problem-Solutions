class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i, j, k;
        for(i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            j = i + 1;
            k = n - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    result.push_back(vector<int> {nums[i], nums[j], nums[k]});
                    j++;
                    while(nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                } else if(sum > 0) {
                    k--;
                } else if(sum < 0) {
                    j++;
                }
            }
        }
        return result;
    }
};