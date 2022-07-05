class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        int n = boxes.size();
        for(int i = 0; i < n; i++) {
            int temp = 0;
            for(int j = 0; j < n; j++) {
                if(boxes[j] == '1') {
                    temp += abs(i - j);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};