class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(isalpha(s[i]))
                str += tolower(s[i]);
            if(isdigit(s[i]))
                str += s[i];
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        return (str == rev);
    }
};