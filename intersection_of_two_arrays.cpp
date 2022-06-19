class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        vector<int> res;
        for (auto x : nums1) s1.insert(x);
        for (auto x : nums2) s2.insert(x);
        for (auto x : s1)
            if (s2.find(x) != s2.end()) res.push_back(x);
        return res;
    }
};