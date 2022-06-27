class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; i = i + 2){
            int freq = nums[i], value = nums[i + 1];
            result.insert(result.end(), freq, value);
        }
        return result;
    }
};