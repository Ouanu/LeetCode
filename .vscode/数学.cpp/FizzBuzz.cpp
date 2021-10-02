class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        if(n == 0) return result;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%15!= 0){
                result.push_back("Fizz");
            } else if(i%5==0 && i%15!= 0){
                result.push_back("Buzz"); 
            } else if(i%15==0){
                result.push_back("FizzBuzz"); 
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};