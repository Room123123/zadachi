#include <iostream>
#include <string>

int lastIndexOf(const std::string& s, char c) {
    for (int i = s.length() - 1; i >= 0; --i)
        if (s[i] == c) return i;
    return -1;
}

void test() {
    std::string s = "Hello, World!";
    char c = 'o';
    std::cout << "Last index of '" << c << "' in \"" << s << "\": " << lastIndexOf(s, c) << std::endl;
}

int main() {
    test();
    return 0;
}
