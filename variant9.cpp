#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<double>>;

Matrix multiply(const Matrix& A, const Matrix& B) {
    int n = A.size(), m = A[0].size(), p = B[0].size();
    Matrix C(n, std::vector<double>(p, 0.0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < p; ++j)
            for (int k = 0; k < m; ++k)
                C[i][j] += A[i][k] * B[k][j];
    return C;
}

void printMatrix(const Matrix& M) {
    for (auto& row : M) {
        for (double val : row) std::cout << val << " ";
        std::cout << std::endl;
    }
}

void test() {
    Matrix A = {{1, 2}, {3, 4}};
    Matrix B = {{5, 6}, {7, 8}};
    Matrix C = multiply(A, B);
    std::cout << "A * B:\n";
    printMatrix(C);
}

int main() {
    test();
    return 0;
}
