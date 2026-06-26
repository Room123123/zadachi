#include <iostream>
#include <fstream>
#include <string>

bool compareFiles(const std::string& f1, const std::string& f2) {
    std::ifstream file1(f1), file2(f2);
    if (!file1.is_open() || !file2.is_open()) return false;
    char c1, c2;
    while (file1.get(c1) && file2.get(c2)) {
        if (c1 != c2) return false;
    }
    return file1.eof() && file2.eof();
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <file1> <file2>" << std::endl;
        return 1;
    }
    std::cout << "Files match: " << (compareFiles(argv[1], argv[2]) ? "Yes" : "No") << std::endl;
    return 0;
}
