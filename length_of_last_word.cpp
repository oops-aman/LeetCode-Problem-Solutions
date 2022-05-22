class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag = false;
        for(int i = s.length()-1; i >= 0; i--) {
            if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')) {
                flag = true;
                count++;
            } else {
                if(flag)
                    return count;
            }
        }
        return count;
    }
};