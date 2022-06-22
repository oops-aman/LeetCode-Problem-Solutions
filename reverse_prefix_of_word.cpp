class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int len;
        for(int i = 0; i < n; i++) {
            if(word[i] == ch) {
                len = i+1;
                break;
            }
        }
        reverse(word.begin(), word.begin() + len);
        
        return word;
    }
};