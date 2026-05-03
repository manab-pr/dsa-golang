class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLen = 1;
        
        for(int num : nums) {
            if(numSet.find(num - 1) == numSet.end()) {
                int currentLen = 1;
                int currentNum = num;
                
                while(numSet.find(currentNum + 1) != numSet.end()) {
                    currentLen++;
                    currentNum++;
                }
                
                maxLen = max(maxLen, currentLen);
            }
        }
        
        return maxLen;
    }
};