class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }

        vector<pair<int,int>>elements(mp.begin(),mp.end());

        sort(elements.begin(),elements.end(),
        [](const auto& p1 , const auto& p2){
            return p1.second > p2.second;
        }
        );
        vector<int> result;
        for(int i=0 ; i<k ; i++){
            result.push_back(elements[i].first);
        }
        return result;
    }
};
