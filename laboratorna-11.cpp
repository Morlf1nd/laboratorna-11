#include <iostream>

int main() {
    setlocale(0, ".1251");
    long long number;
    std::cout << "Введіть число: ";
    std::cin >> number;

    int one = 0;
    int zero = 0;


    while (number > 0) {

        int chislo = number % 10;

        if (chislo == 1) {
            one++;
        }
        if (chislo == 0) {
            zero++;
        }


        number /= 10;
    }


    std::cout << "Кількість 1: " << one << std::endl;
    std::cout << "Кількість 0: " << zero << std::endl;

    return 0;
}