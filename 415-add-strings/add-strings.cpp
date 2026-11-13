class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry > 0) {
            int n1 = (i >= 0) ? num1[i--] - '0' : 0;
            int n2 = (j >= 0) ? num2[j--] - '0' : 0;

            int total = n1 + n2 + carry;
            result.push_back((total % 10) + '0');
            carry = total / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
