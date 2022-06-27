class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stck;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                stck.push(-1);
            } else {
                if(stck.top() == -1) {
                    stck.pop();
                    stck.push(1);
                } else {
                    int sum = 0;
                    while(stck.top() != -1) {
                        sum += stck.top();
                        stck.pop();
                    }
                    stck.pop();
                    stck.push(2 * sum);
                }
            }
        }
        
        int res = 0;
        while(!stck.empty()) {
            res += stck.top();
            stck.pop();
        }
        
        return res;
    }
};