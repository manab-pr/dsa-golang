class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0 ;
        int max_len= 1 ;
        for(int i = 0 ; i < n ; i++){
            int current = nums[i];
            int prev = current - 1;

            auto prev_it = find(nums.begin(), nums.end(),  prev);

            if( prev_it == nums.end() ){
               int len = 1 ;
               int next = current +1 ;
               while( find(nums.begin(), nums.end(), next) != nums.end()){
                 len++ ;
                 next++;
               }
                 max_len=max(max_len,len);

            }
        }
        return max_len ;
    }
};
