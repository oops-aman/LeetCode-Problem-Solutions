class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26);
        for(auto i: s) {
            freq[i - 'a']++;
            if(freq[i - 'a'] > 1) return i;
        }
        return 'a';
    }
};