#include <iostream>
#include <string>

struct Date { int day, month, year; };

struct Person {
    std::string fullName;
    Date birthDate;
};

struct Schoolchild : public Person {
    std::string school;
    int grade;
};

struct Student : public Person {
    std::string university;
    std::string faculty;
    std::string group;
};

int main() {
    int type;
    std::cout << "Enter 1 for Schoolchild, 2 for Student: ";
    std::cin >> type;
    std::cin.ignore();

    if (type == 1) {
        Schoolchild s;
        std::cout << "Full name: "; std::getline(std::cin, s.fullName);
        std::cout << "Birth date (dd mm yyyy): "; std::cin >> s.birthDate.day >> s.birthDate.month >> s.birthDate.year;
        std::cin.ignore();
        std::cout << "School: "; std::getline(std::cin, s.school);
        std::cout << "Grade: "; std::cin >> s.grade;
    } else if (type == 2) {
        Student s;
        std::cout << "Full name: "; std::getline(std::cin, s.fullName);
        std::cout << "Birth date (dd mm yyyy): "; std::cin >> s.birthDate.day >> s.birthDate.month >> s.birthDate.year;
        std::cin.ignore();
        std::cout << "University: "; std::getline(std::cin, s.university);
        std::cout << "Faculty: "; std::getline(std::cin, s.faculty);
        std::cout << "Group: "; std::getline(std::cin, s.group);
    }
    return 0;
}
