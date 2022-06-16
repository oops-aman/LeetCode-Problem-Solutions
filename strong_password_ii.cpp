class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
        string special = "!@#$%^&*()-+";
        
        if(n < 8) {
            return false;
        }
        
        for(int i = 0; i < n; i++) {
            if(i > 0 and password[i] == password[i-1]) {
                return false;
            }
            if(password[i] >= 'a' and password[i] <= 'z') {
                flag1 = 1;
            }
            if(password[i] >= 'A' and password[i] <= 'Z') {
                flag2 = 1;
            }
            if(password[i] >= '0' and password[i] <= '9') {
                flag3 = 1;
            }
            for(auto c: special) {
                if(password[i] == c) {
                    flag4 = 1;
                }
            }
        }
        if(flag1 and flag2 and flag3 and flag4)
            return true;
        
        return false;
    }
};