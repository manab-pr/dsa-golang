class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
       
        vector<int> subFreq(26,0);
        vector<int> windowFreq(26,0);

        for(char c : s1){
            subFreq[c -'a']++;
        }
        int l = 0, r = 0;
        while(r < s2.length()){
            windowFreq[s2[r]-'a']++;
            
            if(r - l + 1 > s1.length()){
                windowFreq[s2[l]-'a']--;
                l++;
            }
            if(subFreq == windowFreq){
                return true ; 
            } 
            r++;
        }
        return false ;
    }
};
