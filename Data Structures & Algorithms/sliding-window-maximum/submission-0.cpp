class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>result;
        int left = 0 , right = left + k ;

        while(right <= n ){
            int maxE = INT_MIN;
            for(int i = left ; i < right ; i++){
                maxE = max(maxE,nums[i]);
            }
            result.push_back(maxE);
            left++;
            right++;
        }
        return result;
    }
};
