class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string reversed;
        string rawString;
        for(int i = n-1 ; i >=0 ; i-- ){
            if(s[i] != ' ' && isalnum(s[i])){
            reversed += tolower(s[i]);
            }
        }
        for(char i : s  ){
            if(i !=' ' && isalnum(i)){
                rawString += tolower(i) ;
            }
        }
        return reversed == rawString;  
    }
};
