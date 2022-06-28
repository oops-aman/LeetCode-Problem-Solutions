class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int sum = 0, prod = 1;
        while(num) {
            int rem = num % 10;
            prod *= rem;
            sum += rem;
            num /= 10;
        }
        return prod - sum;
    }
};