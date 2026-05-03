class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for (string i : strs) {
            int freq[26]={0};
            for(char c : i){
              freq[c-'a']++;
            }
            string key;
            for (int j :freq) {
            key += to_string(j) + "#";
           }
            mp[key].push_back(i);

        }
    
     vector<vector<string>> result;
       for(const auto& [_,value]:mp){
         result.push_back(value);
       }
       return result;
    }
};
