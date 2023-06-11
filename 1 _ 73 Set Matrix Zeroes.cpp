/* 73. SET MATRIX ZEROES
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/

void setZeroes(vector<vector<int>> &matrix)
    {
        // Write your code here.
        int r = matrix.size();
        int c = matrix[0].size();
        bool isCol = false;
        for (int i=0; i<r; i++) {
            if (matrix[i][0] == 0) {
                isCol = true;
            }

            for (int j=1; j<c; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i<r; i++) {
            for (int j=1; j<c; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int i=1;i<c; i++) matrix[0][i] = 0;
        }
        if (isCol) {
            for (int i=0; i<r; i++) matrix[i][0] = 0;

        }
    }