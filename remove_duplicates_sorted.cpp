class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        if(nums.size() <= 1)
            return nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[count]) {
                count++;
                nums[count] = nums[i];
            }
        }
        return count+1;
    }
};