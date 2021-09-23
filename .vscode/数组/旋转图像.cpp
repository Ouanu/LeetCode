class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        auto newMatrix = matrix;
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                newMatrix[j][length-i-1]=matrix[i][j];
            }
        }
        matrix=newMatrix;
    }
};