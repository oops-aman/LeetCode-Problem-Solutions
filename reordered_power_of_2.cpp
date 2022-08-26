class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string str = to_string(n);
        sort(str.begin(), str.end());
        for(int i = 0 ; i < 31; i++) {
            long num = pow(2, i);
            string res = to_string(num);
            sort(res.begin(), res.end());
            if(str == res) return true;
        }
        return false;
    }
};