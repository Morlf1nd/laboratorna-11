#include <iostream>

int main() {
    setlocale(0, ".1251");
    int a, b, c;
    std::cout << "Введіть число a: ";
    std::cin >> a;
    std::cout << "Введіть число b: ";
    std::cin >> b;
    std::cout << "Введіть число c: ";
    std::cin >> c;
    if (c == 0) {
        std::cout << "Помилка: число c повинно бути ненульовим." << std::endl;
        return 0;
    }
    std::cout << "Цілі числа від " << a << " до " << b << ", кратні " << c << std::endl;
    for (int i = a; i <= b; ++i) {
        if (i % c == 0) {
            std::cout << i << " " << std::endl;
        }
    }
    return 0;
}