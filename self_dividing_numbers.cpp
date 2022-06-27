class Solution {
public:
    bool isDivisible(int num) {
        int temp = num;
        while(num != 0) {
            int rem = num % 10;
            if(rem == 0 || temp % rem != 0)
                return false;
            
            num /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++) {
            if(isDivisible(i)) {
                result.push_back(i);
            }
        }
        return result;
    }
};