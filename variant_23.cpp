#include <iostream>
#include <string>

int compareDates(const std::string& d1, const std::string& d2) {
    int day1, mon1, year1, day2, mon2, year2;
    sscanf(d1.c_str(), "%d/%d/%d", &day1, &mon1, &year1);
    sscanf(d2.c_str(), "%d/%d/%d", &day2, &mon2, &year2);

    if (year1 != year2) return year1 - year2;
    if (mon1 != mon2) return mon1 - mon2;
    return day1 - day2;
}

void test() {
    std::string d1 = "15/08/2023";
    std::string d2 = "20/08/2023";
    int result = compareDates(d1, d2);
    std::cout << d1 << " vs " << d2 << ": " << (result < 0 ? "earlier" : result > 0 ? "later" : "same") << std::endl;
}

int main() {
    test();
    return 0;
}
