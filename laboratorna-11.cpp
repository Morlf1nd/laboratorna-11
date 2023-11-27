#include <iostream>

void FuncSwitch(int day);
void FuncIf(int day);

int main() {
    setlocale(0, ".1251");
    std::cout << "Виберіть спосіб вирішення задачі if=1/swith=2: ";
    int way;
    std::cin >> way;
    std::cout << "Введіть номер дня тижня: ";
    int day;
    std::cin >> day;

    switch (way) {
    case 1:
        FuncIf(day);
        break;
    case 2:
        FuncSwitch(day);
        break;
    default:
        std::cout << "Неправильний вибір";
        break;
    }

    return 0;
}
void FuncSwitch(int day) {
    switch (day) {
    case 1:
        std::cout << "Week " << day << " - English: Monday, Українська: Понеділок" << std::endl;
        break;
    case 2:
        std::cout << "Week " << day << " - English: Tuesday, Українська: Вівторок" << std::endl;
        break;
    case 3:
        std::cout << "Week " << day << " - English: Wednesday, Українська: Середа" << std::endl;
        break;
    case 4:
        std::cout << "Week " << day << " - English: Thursday, Українська: Четвер" << std::endl;
        break;
    case 5:
        std::cout << "Week " << day << " - English: Friday, Українська: П'ятниця" << std::endl;
        break;
    case 6:
        std::cout << "Week " << day << " - English: Saturday, Українська: Субота" << std::endl;
        break;
    case 7:
        std::cout << "Week " << day << " - English: Sunday, Українська: Неділя" << std::endl;
        break;
    default:
        std::cout << "Введено невірний номер тижня!" << std::endl;
    }
};
void FuncIf(int day) {
    if (day == 1) {
        std::cout << "Week " << day << " - English: Monday, Українська: Понеділок" << std::endl;
    }
    else if (day == 2) {
        std::cout << "Week " << day << " - English: Tuesday, Українська: Вівторок" << std::endl;
    }
    else if (day == 3) {
        std::cout << "Week " << day << " - English: Wednesday, Українська: Середа" << std::endl;
    }
    else if (day == 4) {
        std::cout << "Week " << day << " - English: Thursday, Українська: Четвер" << std::endl;
    }
    else if (day == 5) {
        std::cout << "Week " << day << " - English: Friday, Українська: П'ятниця" << std::endl;
    }
    else if (day == 6) {
        std::cout << "Week " << day << " - English: Saturday, Українська: Субота" << std::endl;
    }
    else if (day == 7) {
        std::cout << "Week " << day << " - English: Sunday, Українська: Неділя" << std::endl;
    }
    else {
        std::cout << "Введено невірний номер тижня!" << std::endl;
    }
};