#include <iostream>

int main() {
    setlocale(0, ".1251");
    int Dobytok = 1;
    for (int i = 1; i < 9; i++)
    {
        Dobytok *= (1 + (i * (i + 1)) / 2);

    }
    std::cout << "Добуток= " << Dobytok;
    return 0;
}