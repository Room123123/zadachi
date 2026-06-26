#include <iostream>
#include <limits>

int main() {
    float eps = 1.0f, zero = 1.0f;
    while (1.0f + eps / 2.0f != 1.0f) eps /= 2.0f;
    while (zero / 2.0f != 0.0f) zero /= 2.0f;

    std::cout << "Machine epsilon (float): " << eps << std::endl;
    std::cout << "Machine zero (float): " << zero << std::endl;
    std::cout << "std::numeric_limits epsilon: " << std::numeric_limits<float>::epsilon() << std::endl;
    return 0;
}
