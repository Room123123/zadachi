#include <iostream>
#include <vector>

int digitSum(int n) {
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    return sum;
}

std::vector<int> findNumbersWithSum(int N) {
    std::vector<int> result;
    for (int i = 100; i <= 999; ++i)
        if (digitSum(i) == N) result.push_back(i);
    return result;
}

void test() {
    int N = 10;
    auto nums = findNumbersWithSum(N);
    std::cout << "3-digit numbers with digit sum = " << N << ": ";
    for (int n : nums) std::cout << n << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
