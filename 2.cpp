#include <iostream>

int power(int x, int y)
{
    int multi = 1;
    for (int i = 0; i < y; i++)
    {
        multi = multi * x;
    }
    std::cout << multi;
}

int main()
{
    int base;
    std::cout << "enter base: ";
    std::cin >> base;

    int exponent;
    std::cout << "enter exponent: ";
    std::cin >> exponent;

    power(base, exponent);
}