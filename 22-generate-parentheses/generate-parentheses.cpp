class Solution {
public:
    vector<string> ans;

    void generate(string curr, int open, int close, int n) {
        // Base case
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // Add '(' if we still can
        if (open < n) {
            generate(curr + "(", open + 1, close, n);
        }

        // Add ')' only if it won't make the string invalid
        if (close < open) {
            generate(curr + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return ans;
    }
};