#include <iostream>
#include <string>

std::string trim(const std::string& s) {
    size_t start = s.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) return "";
    size_t end = s.find_last_not_of(" \t\n\r");
    return s.substr(start, end - start + 1);
}

void test() {
    std::string s = "   Hello, World!   \t\n";
    std::cout << "Original: \"" << s << "\"" << std::endl;
    std::cout << "Trimmed: \"" << trim(s) << "\"" << std::endl;
}

int main() {
    test();
    return 0;
}
