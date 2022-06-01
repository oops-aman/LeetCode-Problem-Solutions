class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int res = 0;
        
        if(ops.size() == 0) return 0;
        
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "C") {
                res -= st.top();
                st.pop();
            } else if(ops[i] == "D") {
                st.push(st.top() * 2);
                res += st.top();
            } else if(ops[i] == "+") {
                int last = st.top();
                st.pop();
                int sum = last + st.top();
                st.push(last);
                st.push(sum);
                res += st.top();
            } else {
                st.push(stoi(ops[i]));
                res += st.top();
            }
        }
        return res;
    }
};