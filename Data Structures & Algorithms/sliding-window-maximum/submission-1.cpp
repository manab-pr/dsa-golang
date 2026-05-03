class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>result(n-k+1);
        deque<int> q;
        int left = 0 , right = 0;

        while(right < n ){
            while(!q.empty() && nums[q.back()] < nums[right]){
                         q.pop_back();

            }
            q.push_back(right);

            if(left > q.front()){
                q.pop_front();
            }
            if(right+1 >= k ){
                result[left] = nums[q.front()];
                left++;
            }
            right++;
            
        }
        return result;
    }
};
