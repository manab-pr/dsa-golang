class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        vector<int>suffix(nums.size(), 1);
        vector<int>prefix(nums.size(), 1);
       for (int i=1; i<nums.size(); i++){
        prefix[0]=1;
        prefix[i]=prefix[i-1]*nums[i-1];
      
       }
       for (int i =nums.size()-2 ;i>=0  ; i--){
         suffix[nums.size() - 1] = 1;
          suffix[i]=suffix[i+1]*nums[i+1];
       }
       for (int i=0 ; i < nums.size(); i++){
        result.push_back(prefix[i]*suffix[i]);
       }
      

       return result;
    }
};
