class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // 9 sets for rows
        vector<unordered_set<char>> rows(9);

        // 9 sets for columns
        vector<unordered_set<char>> cols(9);

        // 9 sets for 3x3 boxes
        vector<unordered_set<char>> boxes(9);

        // Visit every cell
        for (int r = 0; r < 9; r++) {

            for (int c = 0; c < 9; c++) {

                // Ignore empty cells
                if (board[r][c] == '.') {
                    continue;
                }

                char num = board[r][c];

                // Find which 3x3 box this cell belongs to
                int box = (r / 3) * 3 + (c / 3);

                // Check for duplicate
                if (rows[r].count(num) ||
                    cols[c].count(num) ||
                    boxes[box].count(num)) {

                    return false;
                }

                // Remember the number
                rows[r].insert(num);
                cols[c].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};