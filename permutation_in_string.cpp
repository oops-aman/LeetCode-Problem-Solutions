class Solution {
public:
    bool isPermutation(vector<int> s1freq, vector<int> s2freq) {
        for(int i = 0; i < 26; ++i) {
            if(s1freq[i] != s2freq[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        
        if(n > m) return false;
        
        vector<int> s1freq(26, 0);
        vector<int> s2freq(26, 0);
        
        for(char c: s1) {
            s1freq[c - 'a']++;
        }
        
        int i = 0, j = -1;
        for(;i < n - 1; ++i) {
            s2freq[s2[i] - 'a']++;
        }
        
        i--;
        while(i < m-1) {
            i++;
            s2freq[s2[i] - 'a']++;
            if(isPermutation(s1freq, s2freq)) {
                return true;
            }
            j++;
            s2freq[s2[j] - 'a']--;
        }
        return false;
    }
};