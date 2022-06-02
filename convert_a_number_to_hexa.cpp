class Solution {
public:
    const string hex = "0123456789abcdef";
    string toHex(int num) {
        if(num == 0) 
            return "0";
        string res;
        unsigned int n = num;
        for(; n > 0; n /= 16) {
            int div = n % 16;
            char c;
            if(div < 10) c = div + '0';
            else c = 'a' + div - 10;
            
            res = c + res;
        }
        return res;
    }
};