#include <iostream>

int geo(int n, int x)
{
    int multiply = x;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            multiply = multiply * x;
        }
        sum = sum + multiply;
        multiply = x;
    }
    std::cout << sum;
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int x;
    std::cout << "enter x: ";
    std::cin >> x;

    geo(n, x);
}
