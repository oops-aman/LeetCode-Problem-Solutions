class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int res = 0, maxe = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(maxe < nums[i]) {
                maxe = nums[i];
                res = i;
            }
        }
        return res;
    }
};