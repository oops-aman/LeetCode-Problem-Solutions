class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int sum = nums.size() * (nums.size() + 1)/2;
        int sumTemp = 0;
        for(auto i: nums) 
            sumTemp += i;
        
        return sum - sumTemp;
    }
};