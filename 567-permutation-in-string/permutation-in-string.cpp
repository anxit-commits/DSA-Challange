class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if (s1.length() > s2.length()) return false;

    vector<int> s1Freq(26, 0), s2Freq(26, 0);

    for (char c : s1)
        s1Freq[c - 'a']++;

    for (int i = 0; i < s2.length(); i++) {
        s2Freq[s2[i] - 'a']++;

        
        if (i >= s1.length())
            s2Freq[s2[i - s1.length()] - 'a']--;

        
        if (s1Freq == s2Freq)
            return true;
    }

    return false;
    }
};