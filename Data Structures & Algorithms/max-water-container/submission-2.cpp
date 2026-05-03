class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int result = 0 ;
        for(int i =0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                int maxArea = (j-i)*min(heights[i],heights[j]);
                result=max(result,maxArea);
            }
        }
        return result;
        
    }
};
