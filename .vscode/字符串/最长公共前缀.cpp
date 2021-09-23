class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()<=1)return strs[0];
        int length = strs.size();
        string t=strs[0];
        for(int i=0; i<length-1; i++){
            t=compare(t, strs[i+1]);
        }
        return t;
    }
    string compare(string s, string t){
        int left=0, right=0;
        string re;
        for(;left<s.size()&&right<t.size();){
            if(s[left] == t[right]){
                re.push_back(s[left]);
                left++;
                right++;
            }else{
                break;
            }
        }
        return re;
    }
};