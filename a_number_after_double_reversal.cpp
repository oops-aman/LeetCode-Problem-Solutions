class Solution {
public:
    bool isSameAfterReversals(int num) {
        int l = 2;
        int rev = 0,rem=0;
        int temp = num;
        while(l != 0){
            rev= 0;
            while(temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            temp = rev;
            l--;
            
        }
        return (rev == num);
    }
};