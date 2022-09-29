class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] < nums[j]) {
                    int m = nums[j] - nums[i];
                    diff = max(m, diff);
                }
            }
        }
        return (diff == 0) ? -1 : diff;
    }
};