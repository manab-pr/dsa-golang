class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>> result;
        for (string i : strs) {
        string sorted_word = i;         
        sort(sorted_word.begin(), sorted_word.end());
        mp[sorted_word].push_back(i);   
}
        for (const auto& [key, str_vec] : mp) {
        result.push_back(str_vec);
     }

        return result;
    }
};
