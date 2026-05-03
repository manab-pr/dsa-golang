class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int>mps;
        std::unordered_map<char,int>mpt;
        for(char c: s){
            mps[c]++;
        }
        for(char c: t){
            mpt[c]++;
        }

        return mps==mpt;

        
    }
};
