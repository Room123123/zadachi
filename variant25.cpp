#include <iostream>
#include <fstream>
#include <string>

int countLines(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) return -1;
    int count = 0;
    std::string line;
    while (std::getline(file, line)) ++count;
    return count;
}

void test() {
    std::string filename = "test.txt";
    std::ofstream out(filename);
    out << "Line 1\nLine 2\nLine 3\n";
    out.close();
    std::cout << "Lines in " << filename << ": " << countLines(filename) << std::endl;
}

int main() {
    test();
    return 0;
}
