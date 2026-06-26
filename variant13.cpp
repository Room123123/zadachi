#include <iostream>
#include <vector>

bool hasZeroInEachRowAndCol(const std::vector<std::vector<int>>& M) {
    int rows = M.size(), cols = M[0].size();
    std::vector<bool> rowHasZero(rows, false), colHasZero(cols, false);

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (M[i][j] == 0) {
                rowHasZero[i] = true;
                colHasZero[j] = true;
            }

    for (bool b : rowHasZero) if (!b) return false;
    for (bool b : colHasZero) if (!b) return false;
    return true;
}

void test() {
    std::vector<std::vector<int>> M = {
        {1, 0, 3},
        {0, 5, 6},
        {7, 8, 0}
    };
    std::cout << "Each row and col has zero: " << (hasZeroInEachRowAndCol(M) ? "Yes" : "No") << std::endl;
}

int main() {
    test();
    return 0;
}
