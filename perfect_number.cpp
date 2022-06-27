class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 1;
        
        if(num <= 1) {
            return false;
        }
        
        int i = 2;
        while(i <= sqrt(num)) {
            if(num % i == 0)
                 sum = sum + i + (num/i);
            
            i++;
        }
        return (sum == num);
    }
};