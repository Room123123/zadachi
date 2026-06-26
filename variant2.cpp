#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int rows = 100, cols = 200;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i)
        arr[i] = new int[cols];

    std::srand(std::time(nullptr));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            arr[i][j] = -3 + std::rand() % 14; // от -3 до 10

    for (int i = 0; i < rows; ++i)
        delete[] arr[i];
    delete[] arr;
    return 0;
}
