class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(const auto &str:s){
            if(isalnum(str)){
            res+=tolower(str);

            }
        }
        int st=0,end=res.length()-1;
        while(st<=end){
            if(res[st]!=res[end]) return false;
            st++;
            end--;
        }
        return true;
    }
};
