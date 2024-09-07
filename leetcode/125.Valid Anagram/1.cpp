class Solution {
public:
    bool isPalindrome(string s) {
       string str = "";
       for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                if(isupper(s[i])){
                    str += tolower(s[i]);
                }else{
                    str += s[i];
                }
            }
       }
       string reverse_str = "";
       for(int i = str.size() - 1; i >= 0; i--){
            reverse_str += str[i];
       } 
       cout << str << "\n" << reverse_str << "\n";
       return str == reverse_str;
    }
};
