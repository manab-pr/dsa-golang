class Solution {
public:
   string encodedString;
    string delimiter ="@$@";
    string encode(vector<string>& strs) {
      for ( int i =0 ; i< strs.size(); i++){
      encodedString += (strs[i]+ delimiter);
      };
      return encodedString;
    }

    vector<string> decode(string s) {
     vector<string> result;
     string token;
     size_t pos = 0 ;

     while((pos = encodedString.find(delimiter)) != string::npos){
        token=encodedString.substr(0,pos);
        result.push_back(token);
        encodedString.erase(0,pos+delimiter.length());
     }
     return result;
    }
};
