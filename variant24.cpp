#include <iostream>
#include <string>
#include <ctime>

std::string getCurrentDate() {
    time_t now = time(nullptr);
    tm* t = localtime(&now);
    char buf[100];
    const char* months[] = {"января", "февраля", "марта", "апреля", "мая", "июня",
                            "июля", "августа", "сентября", "октября", "ноября", "декабря"};
    sprintf(buf, "%02d/%s/%04d", t->tm_mday, months[t->tm_mon], t->tm_year + 1900);
    return std::string(buf);
}

void test() {
    std::cout << "Current date: " << getCurrentDate() << std::endl;
}

int main() {
    test();
    return 0;
}
