#include <iostream>

float great(float k[2])
{
    float greatest = 0;
    for (int i = 0; i < 3; i++)
    {
        if (greatest < k[i])
        {
            greatest = k[i];
        }
    }
    std::cout << "greatest: " << greatest;
}

int main()
{
    float x[2];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> x[i];
    }
    great(x);
}