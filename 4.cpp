#include <iostream>

int fact(int n)
{
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout << factorial;
}

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    fact(n);
}