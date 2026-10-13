//Problem 867
//Transpose Matrix

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> new_matrix(column, vector<int>(row));
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                int temp= matrix[i][j];
                new_matrix[j][i] = temp;
            }
        }
        return new_matrix;
    }
};
