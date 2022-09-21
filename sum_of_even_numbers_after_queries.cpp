class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> res(n, 0);
        int sum = 0;
        for(auto i: nums)
            if((i & 1) == 0) sum += i;
        
        
        for(int i = 0; i < n; i++) {
            int val = queries[i][0], index = queries[i][1];
            int prev = nums[index];
            nums[index] += val;
            
            bool bef = (prev % 2) == 0;
            bool now = (nums[index] % 2) == 0;
            
            if(bef and now) {
                res[i] = sum + val;
                sum += val;
            } else if(!bef and now) {
                res[i] = sum + nums[index];
                sum += nums[index];
            } else if(bef and !now) {
                res[i] = sum - prev;
                sum -= prev;
            } else {
                res[i] = sum;
            }
        }
        return res;
    }
};