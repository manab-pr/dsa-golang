class Solution {
public:
    string encodedString;
    string delimiter =":";
    string encode(vector<string>& strs) {
      for ( int i =0 ; i< strs.size(); i++){
      string tokenSize=to_string(strs[i].length());
      encodedString += (tokenSize + delimiter + strs[i]);
      };
      return encodedString;
    }

    vector<string> decode(string s) {
     vector<string> result;
     string token;
     int i=0 ; 
     while ( i<encodedString.size()){
        int j =i ;
        while(s[j] != ':') j++ ;
        int len =stoi(encodedString.substr(i,j-i));
        token = encodedString.substr(j+1,len);
        result.push_back(token);
        i=j+1+len;
     }
     return result;
    }
};
