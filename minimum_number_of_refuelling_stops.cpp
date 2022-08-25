class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        int curr = startFuel, i = 0;
        int res = 0;
        
        priority_queue<int> p;
        while(curr < target) {
            while(i < n and curr >= stations[i][0]) {
                p.push(stations[i][1]);
                i++;
            }
            
            if(p.empty()) return -1;
            
            curr += p.top();
            p.pop();
            res++;
        }
        return res;
    }
};