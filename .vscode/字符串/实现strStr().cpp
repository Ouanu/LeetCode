class Solution {
public:
    int strStr(string haystack, string needle) {
        int length_H = haystack.size();
        int length_N = needle.size();
        if(length_N == 0) return 0;
        int left=0, right=0;
        while(left < length_H && right < length_N){
            if(haystack[left] == needle[right]){
                left++;
                right++;
            }
            else{
                left = left - right + 1;
                right = 0;
            }
        }
        if(right == length_N)return left-right;
        return -1;
    }
};