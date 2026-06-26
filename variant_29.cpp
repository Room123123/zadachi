#include <iostream>
#include <string>
#include <vector>

struct Date { int day, month, year; };

struct Person {
    std::string fullName;
    Date birthDate;
};

struct Worker : public Person {
    std::vector<std::pair<std::string, int>> professions; // <profession, category>
};

struct Programmer : public Person {
    std::string university;
    int graduationYear;
    std::vector<std::pair<std::string, int>> languages; // <language, proficiency>
};

int main() {
    int type;
    std::cout << "Enter 1 for Worker, 2 for Programmer: ";
    std::cin >> type;
    std::cin.ignore();

    if (type == 1) {
        Worker w;
        std::cout << "Full name: "; std::getline(std::cin, w.fullName);
        std::cout << "Birth date (dd mm yyyy): "; std::cin >> w.birthDate.day >> w.birthDate.month >> w.birthDate.year;
        std::cin.ignore();
        int n;
        std::cout << "Number of professions (max 5): "; std::cin >> n;
        std::cin.ignore();
        for (int i = 0; i < n && i < 5; ++i) {
            std::string prof; int cat;
            std::cout << "Profession: "; std::getline(std::cin, prof);
            std::cout << "Category: "; std::cin >> cat;
            std::cin.ignore();
            w.professions.push_back({prof, cat});
        }
    } else if (type == 2) {
        Programmer p;
        std::cout << "Full name: "; std::getline(std::cin, p.fullName);
        std::cout << "Birth date (dd mm yyyy): "; std::cin >> p.birthDate.day >> p.birthDate.month >> p.birthDate.year;
        std::cin.ignore();
        std::cout << "University: "; std::getline(std::cin, p.university);
        std::cout << "Graduation year: "; std::cin >> p.graduationYear;
        std::cin.ignore();
        int n;
        std::cout << "Number of languages (max 5): "; std::cin >> n;
        std::cin.ignore();
        for (int i = 0; i < n && i < 5; ++i) {
            std::string lang; int level;
            std::cout << "Language: "; std::getline(std::cin, lang);
            std::cout << "Proficiency (1-10): "; std::cin >> level;
            std::cin.ignore();
            p.languages.push_back({lang, level});
        }
    }
    return 0;
}
