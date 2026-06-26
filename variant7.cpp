#include <iostream>
#include <vector>

bool isPalindrome(int n) {
    int rev = 0, orig = n;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    return orig == rev;
}

std::vector<int> findPalindromes(int N) {
    std::vector<int> result;
    for (int i = 1; i <= N; ++i)
        if (isPalindrome(i)) result.push_back(i);
    return result;
}

void test() {
    int N = 200;
    auto palindromes = findPalindromes(N);
    std::cout << "Palindromes up to " << N << ": ";
    for (int p : palindromes) std::cout << p << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
