class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = nums.size();
        vector<int> a1, a2, res;
        
        for(int i = 0; i < n; i++) {
            a1.push_back(nums[i]);
        }
        for(int i = n; i < size; i++) {
            a2.push_back(nums[i]);
        }
        for(int i = 0; i < size/2; i++) {
            res.push_back(a1[i]);
            res.push_back(a2[i]);
        }
        return res;
    }
};