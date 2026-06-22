class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int counter = 0;
        
        for (char c : s) {
            if (c == '(') {
                // If counter > 0, we are inside a primitive string
                if (counter > 0) result += c;
                counter++;
            } else { // c == ')'
                counter--;
                // If counter > 0, we are still inside a primitive string
                if (counter > 0) result += c;
            }
        }
        
        return result;
    }
};