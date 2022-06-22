class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> arr;
        
        vector<int> large;
        int i = 0, n = nums.size(), count = 0;
        
        while(i < n) {
            if(nums[i] < pivot) arr.push_back(nums[i]);
            else if(nums[i] == pivot) count++;
            else large.push_back(nums[i]);
            
            i++;
        }
        for(int i = 0; i < count; i++){
            arr.push_back(pivot);
        }
        for(int i = 0; i < large.size(); i++){
            arr.push_back(large[i]);
        }
        return arr;
    }
};