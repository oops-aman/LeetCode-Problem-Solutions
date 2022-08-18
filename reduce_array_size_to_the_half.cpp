class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        for(auto &i: arr) 
            m[i]++;
        
        vector<int> count;
        for(auto &i: m)
            count.push_back(i.second);
        
        sort(count.begin(), count.end(), greater<int>());
        
        int res = 0, sum = 0, index = 0;
        while(sum < arr.size()/2) {
            sum += count[index++];
            res++;
        }
        
        return res;
    }
};