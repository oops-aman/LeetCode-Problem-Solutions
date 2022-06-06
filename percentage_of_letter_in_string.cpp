class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == letter)
                count++;
        }
        int per = (count * 100) / n;
        return per;
    }
};