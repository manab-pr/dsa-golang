class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0 , right = n - 1 ;
        int result = 0 ; 

        for(int i = 0 ; i < n ; i++){
            int maxLeft = 0 , maxRight =0 ;
         for (int j = 0; j <= i; j++) {
                maxLeft = max(maxLeft, height[j]);
            }
        for (int j = i; j < n; j++) {
                maxRight = max(maxRight, height[j]);
            }
        result += min(maxLeft, maxRight) - height[i];
        
        }
        return result;
        
    }
};
