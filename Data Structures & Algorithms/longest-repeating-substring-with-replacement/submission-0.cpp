class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxLen = 0 ;
        unordered_map<char,int> count;
        int  l = 0 , maxFreq = 0 ;

        for(int r = 0 ; r < n ; r++ ){
            count[s[r]]++;
            maxFreq = max(maxFreq,count[s[r]]);

            while((r - l + 1) - maxFreq > k ){
                count[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r - l +1);
        }
        return maxLen;
    }
};
