class Solution {
public:
    int countHillValley(vector<int>& nums) {int n = nums.size();
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int count = 0;
        for(int i = 1; i < nums.size() - 1; i++) {
            if (nums[i-1] > nums[i] && nums[i+1] > nums[i] || nums[i-1] < nums[i] && nums[i+1] < nums[i])
                count++;
        }
        return count;
    }
};