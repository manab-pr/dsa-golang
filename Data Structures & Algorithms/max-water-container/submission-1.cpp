class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left=0,right=n-1;
        int result = 0 ;
        while(left < right){
           int maxArea = (right-left)*min(heights[right],heights[left]);
           result = max(maxArea,result);
           if(heights[left] < heights[right]){
            left++;
           }else{
            right--;
           }
        }
        return result;
        
    }
};
