class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = INT_MAX, ans;
        for(int i = 0; i < nums.size(); i++) {
            int left = i + 1, right = nums.size() - 1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == target)
                    return sum;
                else if(sum < target) {
                    if(target - sum < res) {
                        res = target - sum;
                        ans = sum;
                    }
                    left++;
                } else if(sum > target) {
                    if(sum - target < res) {
                        res = sum - target;
                        ans = sum;
                    }
                    right--;
                }
            }
        }
        return ans;
    }
};