class Solution {
public:
    string minWindow(string s, string t) 
    {
        int left = 0;
        int right = 0;
        int startIndex = -1;         // starting index of min window
        int minWindowLength = INT_MAX;
        int sLength = s.size();
        int tLength = t.size();

        vector<int> charFreq(256, 0);  // frequency of chars in t
        for (char c : t) {
            charFreq[c]++;
        }

        int matchedCount = 0;   // how many chars from t are matched so far

        while (right < sLength) {
            // expand window
            if (charFreq[s[right]] > 0) {
                matchedCount++;
            }
            charFreq[s[right]]--;

            // shrink window when valid
            while (matchedCount == tLength) {
                if (right - left + 1 < minWindowLength) {
                    minWindowLength = right - left + 1;
                    startIndex = left;
                }

                charFreq[s[left]]++;
                if (charFreq[s[left]] > 0) {
                    matchedCount--;
                }
                left++;
            }

            right++;
        }

        return (startIndex == -1) ? "" : s.substr(startIndex, minWindowLength);
    }
};
