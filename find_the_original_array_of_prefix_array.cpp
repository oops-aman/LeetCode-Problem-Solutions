class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int p = 0;
        for(int i = 0; i < pref.size(); i++) {
            pref[i] ^= p;
            p ^= pref[i];
        }
        return pref;
    }
};