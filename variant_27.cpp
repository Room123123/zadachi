#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    const int N = 10000;
    std::srand(std::time(nullptr));

    // Запись в бинарный файл
    std::ofstream out("data.bin", std::ios::binary);
    for (int i = 0; i < N; ++i) {
        int val = (std::rand() % 2 == 0) ? -1 : 1;
        out.write(reinterpret_cast<char*>(&val), sizeof(int));
    }
    out.close();

    // Чтение в динамическую память
    std::ifstream in("data.bin", std::ios::binary);
    int* arr = new int[N];
    in.read(reinterpret_cast<char*>(arr), N * sizeof(int));
    in.close();

    int sum = 0;
    for (int i = 0; i < N; ++i) sum += arr[i];
    delete[] arr;

    std::cout << "Sum of 10000 random ±1 values: " << sum << std::endl;
    return 0;
}
