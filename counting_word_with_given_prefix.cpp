class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int count = 0;
        for(auto x: words) {
            string sub = x.substr(0, n);
            if(sub == pref)
                count++;
        }
        return count;
    }
};      