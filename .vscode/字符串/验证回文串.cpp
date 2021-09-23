class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(char c:s){
            if(isalpha(c) || isdigit(c)){
                x+=c;
            }
        }
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        int length = x.size();
        for(int i=0; i<(length+1)/2; i++){
            if(x[i] != x[length-i-1]) return false;
        }
        return true;
    }
};