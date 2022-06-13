class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        letterCasePermuteUtil(res, s, 0);
        return res;
    }
    
    void letterCasePermuteUtil(vector<string>& res, string s, int pos) {
        if(pos == s.length()) {
            res.push_back(s);
            return;
        }
        
        letterCasePermuteUtil(res, s, pos+1);
        char c = s[pos];
        
        // Capital letter
        if(c >= 65 && c <= 90) {
            s[pos] = 'a' + (c - 'A');
            letterCasePermuteUtil(res, s, pos+1); // convert to small
            s[pos] = c;
        }

        // Smallcase letter
        if(c >= 97) {
            s[pos] = 'A' + (c - 'a');
            letterCasePermuteUtil(res, s, pos+1); // convert to capital
            s[pos] = c;
        }
    }
};