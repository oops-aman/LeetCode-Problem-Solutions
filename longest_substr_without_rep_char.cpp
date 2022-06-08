class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> st;
        int i = 0, j = 0;
        int res = 0;
        while(i < s.size()) {
            if(st.count(s[i]) == 1) {
                st.erase(s[j++]);
            } else {
                st.insert(s[i++]);
                if(res < st.size()) {
                    res = st.size();
                }
            }
        }
        return res;
    }
};