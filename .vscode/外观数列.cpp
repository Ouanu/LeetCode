class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string s=countAndSay(n-1);
        string r;
        int cnt=1;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=s[i+1]){
                r.push_back(cnt+'0');
                r.push_back(s[i]);
                cnt=1;
            }else{
                cnt++;
            }
        }
        return r;
    }
};