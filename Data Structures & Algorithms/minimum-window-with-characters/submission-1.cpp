class Solution {
public:
    
       string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char,int>targetFreq,windowFreq;
        for ( char c : t ){
            targetFreq[c]++;
        }
        int matchedCount = 0;
        int requiredCount = targetFreq.size(); 

        pair<int, int> bestWindow = {-1, -1};
        int minWindowLen = INT_MAX;

        int left = 0;

        for( int right = 0 ; right < s.length() ; right++ ){
            char ch = s[right];
            windowFreq[ch]++;

            if (targetFreq.count(ch) && windowFreq[ch] == targetFreq[ch]) {
                matchedCount++;
            }

            // shrink window from left as long as it's valid
            while (matchedCount == requiredCount) {
                if ((right - left + 1) < minWindowLen) {
                    minWindowLen = right - left + 1;
                    bestWindow = {left, right};
                }

                // pop from left
                char leftChar = s[left];
                windowFreq[leftChar]--;
                if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                    matchedCount--;
                }
                left++;
            }

        }
        return minWindowLen == INT_MAX ? "" : s.substr(bestWindow.first, minWindowLen);




    }
};
