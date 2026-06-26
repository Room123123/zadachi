#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int rows = 100, cols = 200;
    float** arr = new float*[rows];
    for (int i = 0; i < rows; ++i)
        arr[i] = new float[cols];

    std::srand(std::time(nullptr));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            arr[i][j] = -1.0f + 2.0f * (std::rand() / (float)RAND_MAX);

    for (int i = 0; i < rows; ++i)
        delete[] arr[i];
    delete[] arr;
    return 0;
}
