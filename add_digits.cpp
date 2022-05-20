class Solution {
public:
    int addDigits(int num) {
        int total = 0;
        while(num > 0) {
            total += num % 10;
            num /= 10;
            if(num == 0 && total > 9) {
                num = total;
                total = 0;
            }
        }
        return total;
    }
};