class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        int prod=1;
        int zeroCount = 0 ;
       for (int i=0; i<nums.size(); i++){
        if(nums[i]==0){
          zeroCount++;
          continue;
        } else {
            prod= prod*nums[i];
        }
       }
       for (int i : nums){
        if(zeroCount>1) {
            result.push_back(0);
            }else if(zeroCount == 1) {
            result.push_back(i==0? prod : 0);
            }else{
            result.push_back(prod/i);

        }
       }

       return result;
    }
};
