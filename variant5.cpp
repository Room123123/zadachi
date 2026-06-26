#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> findPrimes(int N) {
    std::vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;

    std::vector<int> primes;
    for (int i = 2; i <= N; ++i)
        if (isPrime[i]) primes.push_back(i);
    return primes;
}

void test() {
    int N = 30;
    auto primes = findPrimes(N);
    std::cout << "Primes up to " << N << ": ";
    for (int p : primes) std::cout << p << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
