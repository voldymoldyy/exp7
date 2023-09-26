#include <iostream>
int fb(int n, int term1, int term2)
{
    std::cout << term1;
    if (n > 0)
    {
        return fb(n - 1, term2, term1 + term2);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int term1 = 0;
    int term2 = 1;

    int fib = fb(n, term1, term2);
    std::cout << fib;
}