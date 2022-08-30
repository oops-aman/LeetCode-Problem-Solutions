class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length(), m = needle.length();
        if(m > n) return -1;
        if(haystack == needle) return 0;
        for(int i = 0; i < n; i++) {
            int j;
            for(j = 0; j < m; j++) {
                if(haystack[i +  j] != needle[j])
                    break;
            }
            if(j == m)
                return i;
        }
        return -1;
    }
};