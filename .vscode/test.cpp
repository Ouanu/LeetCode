#include<iostream>
#include<set>
#include<map>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;

int myAtoi(string s);
int main(){
    string s = "-+3";
    int flag = myAtoi(s);
    cout << flag << endl;
    return 0;
}
int myAtoi(string s) {
        string checked;
        int cnt=0;
        for(char c:s){
            if(isdigit(c)) {
                checked += c;
            } else if(c=='-'||c=='+'){
                checked+=c;
                cnt++;
                cout << cnt << endl;
                if(cnt==2)break;
            } else if(c==' '){
                continue;
            } else {
                break;
            }
        }
        if(checked.size() == 0 || cnt == 2){
            return 0;
        }
        if(stod(checked)> INT32_MAX){
            return pow(2,31);
        } else if(stod(checked) < INT32_MIN){
            return 0-pow(2,31);
        } else {
            return stoi(checked);
        }
    }