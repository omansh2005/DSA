class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        // Start from 1, and go up to n (inclusive)
        for (int i = 1; i <= n; i++) {
            // Check divisibility by both 3 and 5 first
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                ans.push_back("Fizz");
            } else if (i % 5 == 0) {
                ans.push_back("Buzz");
            } else {
                // Convert integer to string
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};