class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> str = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i = 0; i < words.size(); ++i) {
            string res = "";
            for(int j = 0; j < words[i].size(); ++j) {
                res += str[words[i][j] - 'a'];
            }
            s.insert(res);
        }
        return s.size();
    }
};