class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>result;
        string digits = "123456789";
        for (int len = 2; len<=9; ++len){
            for(int start = 0; start <= 9 - len; ++start){
                string sub = digits.substr(start,len);
                int num = stoi(sub);
                if(num >= low && num <= high)
                {
                    result.push_back(num);
                }
            }
        }
        return result;
    }
};