class Solution {
public:
    bool isPalindrome(string word) {
        int n = word.size();
        for(int i = 0; i < n; i++) {
            if(word[i] != word[n-i-1])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i = 0; i < n; i++) {
            if(isPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};