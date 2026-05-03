class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       for(int i:nums){
        mp[i]++;
       }
       int maxFreq = 0;
       for(const auto& [num,value]: mp){
        maxFreq= max(maxFreq,value);
       }

       vector<vector<int>>buckets(maxFreq+1);
       for(const auto& [num,value] : mp){
        buckets[value].push_back(num);
       }

       vector<int>result;
       for(int i=maxFreq ;i>=0 && result.size()< k ; i--){
          for(int j : buckets[i]){
            result.push_back(j); 
            if (result.size() == k) break;
          }
       }
       return result;

    }
};
