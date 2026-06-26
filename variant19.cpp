#include <iostream>
#include <vector>

void factorize(int n, std::vector<int>& factors) {
    if (n <= 1) return;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            factorize(n / i, factors);
            return;
        }
    }
    factors.push_back(n);
}

void test() {
    int n = 84;
    std::vector<int> factors;
    factorize(n, factors);
    std::cout << n << " = ";
    for (size_t i = 0; i < factors.size(); ++i) {
        if (i > 0) std::cout << " * ";
        std::cout << factors[i];
    }
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
