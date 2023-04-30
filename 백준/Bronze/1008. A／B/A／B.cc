#include<cstdio>
#include <iostream>
#include <iomanip> // for std::setprecision()
int main()
{
    std::cout << std::setprecision(16);
    double A;
    long double B;
    std::cin >> A;
    std::cin >> B;
    long double result = A / B;
    std::cout << result;
}