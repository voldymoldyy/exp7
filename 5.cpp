#include <iostream>

int sumofdigits(int n)
{
    int k = n;
    int count = 0;
    do
    {
        k = k / 10;
        count++;

    } while (k > 0);

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    std::cout << sum;
}

int reverse(int n)
{
    int k = n;
    int count = 0;

    do
    {
        k = k / 10;
        count++;

    } while (k > 0);
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    sumofdigits(n);
}
