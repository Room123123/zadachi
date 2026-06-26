#include <iostream>
#include <cmath>

double func(double x) {
    return std::sin(x); // пример функции
}

double findMax(double (*f)(double), double a, double b, double step = 0.001) {
    double maxVal = f(a);
    for (double x = a; x <= b; x += step) {
        double val = f(x);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}

void test() {
    double a = 0, b = 3.14159;
    std::cout << "Max of sin(x) on [0, pi]: " << findMax(func, a, b) << std::endl;
}

int main() {
    test();
    return 0;
}
