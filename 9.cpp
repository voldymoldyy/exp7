#include <iostream>

std::string cpy(std::string enter)
{
    int i;

    std::string copy;
    for (i = 0; i < enter.length(); i++)
    {
        copy[i] = enter[i];
    }
    copy[i] = '\0';

    for (int k = 0; copy[i] != '\0'; k++)
    {
        std::cout << copy[k];
    }
}

int main()
{
    std::string enter;
    std::cout << "enter string: ";
    std::cin >> enter;

    cpy(enter);
}