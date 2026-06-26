#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    std::srand(std::time(nullptr));
    const int W = 40, H = 20;
    int x = W / 2, y = H / 2;

    while (true) {
        clearScreen();
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                if (i == y && j == x) std::cout << "*";
                else std::cout << " ";
            }
            std::cout << std::endl;
        }

        // Хаотичное движение с шагом 2
        int dx = (std::rand() % 3 - 1) * 2;
        int dy = (std::rand() % 3 - 1) * 2;
        x = std::max(0, std::min(W - 1, x + dx));
        y = std::max(0, std::min(H - 1, y + dy));

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}
