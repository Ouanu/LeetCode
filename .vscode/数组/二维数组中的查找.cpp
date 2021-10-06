class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return false;
        }
        int rows = matrix.size(), columns = matrix[0].size();
        int row = 0, column = columns - 1;
        while(row < rows && column >= 0) {
            if(matrix[row][column] == target){
                return true;
            } else if(matrix[row][column] > target) {
                column --;
            } else {
                row ++;
            }
        }
         return false;

    }
};