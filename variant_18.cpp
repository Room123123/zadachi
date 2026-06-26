#include <iostream>
#include <cmath>

double func(double x) {
    return x * x; // f(x) = x^2
}

double derivative(double (*f)(double), double x, double h = 1e-7) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

void test() {
    double x = 3.0;
    std::cout << "Derivative of x^2 at x=3: " << derivative(func, x) << std::endl;
    std::cout << "Exact: 6.0" << std::endl;
}

int main() {
    test();
    return 0;
}
