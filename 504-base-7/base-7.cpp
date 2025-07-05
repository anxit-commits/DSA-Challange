class Solution {
public:
    string convertToBase7(int num) {
        
        if (num == 0) return "0";

        bool is_negative = num < 0;
        long n = num;
        if (is_negative) n = -n;

        string result;
        while (n > 0) {
            int digit = n % 7;
            result.push_back(char('0' + digit));
            n /= 7;
        }

        if (is_negative) result.push_back('-');
        reverse(result.begin(), result.end());
        return result;
    }
};
