class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int total = 0;
        int size = mat.size();

        for(int row = 0; row < size; row++)
        {
            total += mat[row][row];

            int col = size - row - 1;

            if(col != row)
            {
                total += mat[row][col];
            }
        }

        return total;
    }
};
