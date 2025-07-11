class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
    int maxFreq = 0, left = 0, result = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right] - 'A']++;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        int windowSize = right - left + 1;
        
        if (windowSize - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        result = max(result, right - left + 1);
    }

    return result;
    }
};