class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target and first == -1) {
                first = i;
            }
            if(nums[i] == target) {
                last = i;
            }
        }
        res.push_back(first);
        res.push_back(last);
        
        return res;
    }
};