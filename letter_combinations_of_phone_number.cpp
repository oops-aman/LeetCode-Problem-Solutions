class Solution {
public:
void solve(string digits, string output, int index, vector<string>& ans, string mapp[]) {
    if(index >= digits.length()) {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapp[number];

    for(int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans,  mapp);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return {};
        string output;
        int index = 0;
        string mapp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapp);
        return ans;
    }
};