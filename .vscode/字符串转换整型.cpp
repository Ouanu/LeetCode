class Solution {
public:
    int myAtoi(string s) {
        string t;
        int cnt=0;
        bool flag=true;
        bool flagNum=true;
        for(char c:s){
            if(c==' '&&flagNum&&flag){
                continue;
            }else if((c=='-'||c=='+') && flag){
                t+=c;
                cnt++;
                flag=false;
            }else if(isdigit(c)){
                t+=c;
                flagNum=false;
            }else{
                break;
            }
        }
        if(cnt==1&&t.size()==1||t.size()==0){
            return 0;
        }
        if(stod(t) > INT32_MAX){
            return INT32_MAX;
        }else if(stod(t) < INT32_MIN){
            return INT32_MIN;
        }else{
            return stoi(t);
        }
    }
};