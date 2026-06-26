#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void sortStrings(std::vector<std::string>& arr) {
    std::sort(arr.begin(), arr.end());
}

void test() {
    std::vector<std::string> arr = {"banana", "apple", "cherry", "date"};
    sortStrings(arr);
    std::cout << "Sorted strings: ";
    for (auto& s : arr) std::cout << s << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
