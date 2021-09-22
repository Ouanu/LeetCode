#include<iostream>
#include<set>
using namespace std;

int firstUniqChar(string s);
int main(){
    int c;
    cin >> c;
    int result;
    result = reverse(c);
    cout << result << endl;
    return 0;
}
int firstUniqChar(string s) {
        set<char> r;
        for(char c:s){
            if(!r.insert(c).second){
                r.erase(c);
            }
        }
        
        for(int i=0; i<s.size(); i++){

            if(r.begin().operator==s[i]){
                return i;
            }
        }
        return -1;
    }