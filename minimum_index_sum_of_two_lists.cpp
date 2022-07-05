class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minSum = INT_MAX;
        vector<string> s;
        
        for(int i = 0; i < list1.size(); i++) {
            for(int j = 0; j < list2.size(); j++) {
                if(list1[i] == list2[j]) {
                    if(i+j < minSum) {
                        minSum = i + j;
                        s.clear();
                        s.push_back(list1[i]);
                    } else if(i+j == minSum) {
                        s.push_back(list1[i]);
                    }
                }
            }
        }
        return s;
    }
};