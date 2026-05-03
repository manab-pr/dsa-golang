class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestSub = 0;
        int left = 0 , right = 0 ;
        set<char> subSet = {} ; 

        while(right < s.length()){
            auto result = subSet.insert(s[right]);
            if(result.second){
                right++;
            }else{
                subSet.erase(s[left]); 
                left++;
            }
            longestSub = max(longestSub,right-left);
        }
        return longestSub;
    }
};
