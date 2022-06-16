class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNo = *min_element(nums.begin(), nums.end());
        int maxNo = *max_element(nums.begin(), nums.end());
        int gcd = 1;
        for(int i = 2; i <= minNo and i <= maxNo; i++) {
            if(minNo % i == 0 and maxNo % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};