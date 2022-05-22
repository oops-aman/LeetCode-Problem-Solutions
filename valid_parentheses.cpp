class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        int top = -1;
        for(int i = 0; i < s.length(); i++) {
            char top = stck.empty() ? '#': stck.top();
            if(top == '(' && s[i] == ')') {
                stck.pop();
            } else if(top == '{' and s[i] == '}') {
                stck.pop();
            } else if(top == '[' and s[i] == ']') {
                stck.pop();
            } else {
                stck.push(s[i]);
            }
        }
        return stck.empty();
    }
};