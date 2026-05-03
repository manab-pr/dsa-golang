class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxLen = 0 ;

        for(int i = 0 ; i < n ; i++){
            unordered_map<char,int>freq;
            for(int j = i ; j<n ; j++){
                freq[s[j]]++;
            
            int maxFreq= 0;
            for(const auto& p : freq){
                maxFreq=max(maxFreq,p.second);
            }
            int len = j - i + 1;
            if(len - maxFreq <= k ){
                maxLen = max(maxLen,len);
            }
          }
        }
        return maxLen;
    }
};
