class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int row, int col, int d) {
        for (int i = 0; i < 9; i++) {
            if (i != col && board[row][i] == d)
                return false;
            if (i != row && board[i][col] == d)
                return false;
        }
        int istart = row / 3 * 3;
        int jstart = col / 3 * 3;

        for (int k = istart; k < istart + 3; k++) {
            for (int l = jstart; l < jstart + 3; l++) {
                if ((k != row || l != col) && board[k][l] == d)
                    return false;
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    char d = board[i][j];
                    if (!isvalid(board, i, j, d)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};