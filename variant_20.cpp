#include <iostream>
#include <cmath>

double func(double x) {
    return x * x - 4; // корни: ±2
}

double findZero(double (*f)(double), double a, double b, double eps = 1e-7) {
    if (f(a) * f(b) > 0) return NAN;
    while (b - a > eps) {
        double c = (a + b) / 2;
        if (f(c) == 0) return c;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
    }
    return (a + b) / 2;
}

void test() {
    double zero = findZero(func, 0, 5);
    std::cout << "Root of x^2 - 4 on [0,5]: " << zero << std::endl;
}

int main() {
    test();
    return 0;
}
