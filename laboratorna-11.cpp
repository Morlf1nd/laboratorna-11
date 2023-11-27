#include <iostream>
#include <cmath>
int main() {
    setlocale(0, ".1251");
    const int inter = 16;
    int a;
    int werxA = inter + 5;
    int nizA = inter;
    int Ea = 0;
    double F;
    int x = inter;
    F = 2 * pow(log(fabs(x - 1.5)), 6) / log(fabs(x - 3.7) + 8);
    std::cout << "I= " << inter << std::endl;


    for (int i = nizA; i < werxA; i++)
    {
        Ea += i;
    }
    double EA = Ea * F;
    std::cout << "A= " << EA << std::endl;
    int werxB = inter + 8;
    int nizB = inter;
    int Eb = 0;

    for (int i = nizB; i < werxB; i++)
    {
        Eb += i;
    }
    double EB = Eb * F;
    std::cout << "B= " << EB << std::endl;
    long long Z = exp(3 * EA * EB);
    std::cout << "Sym or Z= " << Z << std::endl;
   

    return 0;
}