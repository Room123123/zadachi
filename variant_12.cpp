#include <iostream>
#include <vector>

int countEven(const std::vector<int>& arr) {
    int count = 0;
    for (int x : arr) if (x % 2 == 0) ++count;
    return count;
}

void test() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Even count: " << countEven(arr) << std::endl;
}

int main() {
    test();
    return 0;
}
