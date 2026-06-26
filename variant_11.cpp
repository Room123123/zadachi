#include <iostream>
#include <vector>
#include <unordered_set>

bool hasUniqueDigits(int n) {
    std::unordered_set<int> digits;
    while (n > 0) {
        int d = n % 10;
        if (digits.count(d)) return false;
        digits.insert(d);
        n /= 10;
    }
    return true;
}

std::vector<int> findUniqueDigitNumbers(int N) {
    std::vector<int> result;
    for (int i = 1; i <= N; ++i)
        if (hasUniqueDigits(i)) result.push_back(i);
    return result;
}

void test() {
    int N = 100;
    auto nums = findUniqueDigitNumbers(N);
    std::cout << "Numbers up to " << N << " with unique digits: ";
    for (int n : nums) std::cout << n << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
