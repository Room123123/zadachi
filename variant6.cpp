#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> findLuckyTickets() {
    std::vector<std::string> tickets;
    for (int n = 0; n < 1000000; ++n) {
        char buf[7];
        sprintf(buf, "%06d", n);
        int sum1 = (buf[0]-'0') + (buf[1]-'0') + (buf[2]-'0');
        int sum2 = (buf[3]-'0') + (buf[4]-'0') + (buf[5]-'0');
        if (sum1 == sum2) tickets.push_back(std::string(buf));
    }
    return tickets;
}

void test() {
    auto tickets = findLuckyTickets();
    std::cout << "Total lucky tickets: " << tickets.size() << std::endl;
    std::cout << "First 10: ";
    for (int i = 0; i < 10 && i < tickets.size(); ++i)
        std::cout << tickets[i] << " ";
    std::cout << std::endl;
}

int main() {
    test();
    return 0;
}
