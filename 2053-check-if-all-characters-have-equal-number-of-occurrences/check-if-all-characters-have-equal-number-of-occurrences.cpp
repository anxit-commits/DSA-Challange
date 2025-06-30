class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

    
    for (char ch : s) {
        freq[ch]++;
    }

    
    int count = freq.begin()->second;
    for (auto& pair : freq) {
        if (pair.second != count) {
            return false;
        }
    }

    return true;
        
    }
};