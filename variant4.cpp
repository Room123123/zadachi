#include <iostream>
#include <cmath>
#include <vector>

double vectorLength(const std::vector<double>& v) {
    double sum = 0.0;
    for (double x : v) sum += x * x;
    return std::sqrt(sum);
}

void test() {
    std::vector<double> v1 = {3.0, 4.0};
    std::vector<double> v2 = {1.0, 2.0, 2.0};
    std::cout << "Length of {3,4}: " << vectorLength(v1) << std::endl;
    std::cout << "Length of {1,2,2}: " << vectorLength(v2) << std::endl;
}

int main() {
    test();
    return 0;
}
