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

    int reverse = 0;
    int last = 0;
    for (int i = 0; i < count; i++)
    {
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    std::cout << reverse;
}

int count(int n)
{
    int k = n;
    int count = 0;

    do
    {
        k = k / 10;
        count++;

    } while (k > 0);
    std::cout << count;
}

int main()
{

    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    std::cout << "enter 1 to to compute sum of digits of a number";
    std::cout << "\n";
    std::cout << "enter 2 to find reverse of a number";
    std::cout << "\n";
    std::cout << "enter 3 to count number of digits ";
    std::cout << "\n";

    int choice;
    std::cout << "enter number: ";
    std::cin >> choice;

    if (choice == 1)
    {
        sumofdigits(n);
    }
    else if (choice == 2)
    {
        reverse(n);
    }
    else if (choice == 3)
    {
        count(n);
    }
}
