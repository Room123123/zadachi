#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Press Enter twice..." << std::endl;
    std::cin.get();
    auto start = std::chrono::steady_clock::now();
    std::cin.get();
    auto end = std::chrono::steady_clock::now();

    auto diff = end - start;
    std::cout << "Time between presses: " << std::chrono::duration<double>(diff).count() << " seconds" << std::endl;
    return 0;
}
