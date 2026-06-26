#include <iostream>
#include <vector>
#include <algorithm>

void sortArray(std::vector<double>& arr) {
    std::sort(arr.begin(), arr.end());
}

void test() {
    std::vector<double> arr = {3.2, 1.5, 4.8, 2.1, 0.9};
    sortArray(arr);
    std::cout << "Sorted: ";
    for (double x : arr) std::cout << x << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
