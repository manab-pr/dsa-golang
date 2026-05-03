class Solution {
public:
    bool containsAll(string sub, string t ){
        vector<int> freqSub(128,0),freqT(128,0);
        for(char c : sub ) freqSub[c]++;
        for(char c : t ) freqT[c]++;

        for(int i = 0 ; i < 128 ; i++){
            if(freqT[i] > freqSub[i]) return false;
          
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.size();
        int minLen = INT_MAX;
        string result = "";

        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
             string sub = s.substr(i, j - i + 1);
                if(containsAll(sub,t)){
                    if(sub.size()<minLen){
                         minLen = sub.size();
                         result=sub;

                    }
                }
            }
        }
            return result;

    }
};
