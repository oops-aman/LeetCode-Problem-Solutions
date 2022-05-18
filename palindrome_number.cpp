class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long num = x;
        long revNum = 0;
        while(num > 0) {
            revNum = revNum * 10 + num % 10;
            num /= 10;
        }
        return (x == revNum);
    }
};