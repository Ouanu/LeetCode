class Solution {
public:
    char firstUniqChar(string s) {
        map<int, int> m;
        for(char c:s){
            m[c]++;
        }
        for(char c:s){
            if(m[c] == 1){
                return c;
            }
        }
        return ' ';
    }
};

