class Solution {
public:
    bool isConsistent(string allowed, string s) {
        set<char> st;
        for(int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
        }
        
        for(int i = 0; i < allowed.size(); i++) {
            st.erase(allowed[i]);
        }
        return st.empty() ? true : false;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        //set<char> s;
        int count = 0;
        for(int i = 0; i < words.size(); i++) {
            string word = words[i];
            if(isConsistent(allowed, word)) {
                count++;
            }         
        }
        return count;
    }
};