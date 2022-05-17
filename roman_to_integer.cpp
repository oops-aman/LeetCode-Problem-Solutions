class Solution {
    int getTranslate(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
        return 0;
    }
public:
    int romanToInt(string s) {
        if(s.empty()) return 0;
        int equiValue = 0;
        for(unsigned int i = 0; i < s.size()-1; i++) {
            if(getTranslate(s[i]) < getTranslate(s[i+1])) {
                equiValue -= getTranslate(s[i]);
            } else {
                equiValue += getTranslate(s[i]);
            }
        }
        equiValue += getTranslate(s[s.size()-1]);
        return equiValue;
    }
};