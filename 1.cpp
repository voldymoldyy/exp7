#include <iostream>

int leapyear(int year)
{
    if (year % 4 == 0)
    {
        std::cout << year << " is a leap year";
    }
    else
    {
        std::cout << year << " is not a leap year";
    }
}

int main()
{
    int saal;
    std::cout << "enter year: ";
    std::cin >> saal;

    leapyear(saal);
}