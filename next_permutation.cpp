class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 1;;
        int n = nums.size();
        int lastHigh = -1;
        while(i < n)
        {
            if(nums[i] > nums[i-1])
                lastHigh = i;
            
            i += 1;
        }
        
        if(lastHigh == -1) {
            for(i = 0; i < n/2; i++) 
                swap(nums[i], nums[n-i-1]);
            return;
        }
        
        int var = nums[lastHigh];
        int index = lastHigh;
        for(i = lastHigh; i < n; i++) {
            if(nums[i] > nums[lastHigh-1] and nums[i] < nums[index])
                index = i;
        }
        swap(nums[lastHigh-1], nums[index]);
        sort(nums.begin()+lastHigh,nums.end());
    }
};