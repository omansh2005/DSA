class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }

private:
    string build(string str) {
        string stack = "";
        for (char c : str) {
            if (c != '#') {
                stack.push_back(c);
            } else if (!stack.empty()) {
                stack.pop_back();
            }
        }
        return stack;
    }
};