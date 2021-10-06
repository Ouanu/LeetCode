class Solution {
public:
    int minArray(vector<int>& numbers) {
        if(numbers.size()==0) return 0;
        int i = 0;
        for (i; i < numbers.size()-1; i++)
        {
            if(numbers[i] > numbers[i+1]){
                reverse(numbers.begin(), numbers.begin() + i);
                reverse(numbers.begin() + i + 1, numbers.end());
                reverse(numbers.begin(), numbers.end());
                break;
            }
        }
        return numbers[0];
    }
};
class Solution {
public:
    int minArray(vector<int>& numbers) {
        sort(numbers.begin(), numbers.end());
        return numbers[0];
    }
};
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int left = 0, right = numbers.size()-1;
        while(left < right){
            int mid = (left + right) / 2;
            if(numbers[mid] < numbers[right]){
                right = mid;
            } else if(numbers[mid] > numbers[right]){
                left = mid + 1;
            } else {
                right--;
            }
        }
        return numbers[left];
    }
};