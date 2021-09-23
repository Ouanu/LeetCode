class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())return false;
        map<int, int> smap;
        map<int, int> tmap;
        for(char c:s){
            ++smap[c];
        }
        for(char c:t){
            ++tmap[c];
        }
        return equal(smap.begin(), smap.end(), tmap.begin(), tmap.end());
    }
};