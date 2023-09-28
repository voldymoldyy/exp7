#include <iostream>
#include <cstring>

int len(std::string enter)
{
    std::cout << enter.length();
}

int check(std::string str1, std::string str2)
{
    int check = 0;

    if (str1.length() == str2.length())
    {
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] == str2[i])
            {
                check++;
            }
        }
    }

    if (check == str1.length())
    {
        std::cout << "matched";
    }
    else
    {
        std::cout << "failed";
    }
}

int cpy(std::string str1, std::string str2)
{
    for (int i = 0; i < str1.length(); i++)
    {
        str2[i] = str1[i];
    }

    std::cout << "copied string " << str2;
}

std::string concatenate(std::string str1, std::string str2)
{
    std::string con = str1 + str2;
    std::cout << con;
}

int reverse(std::string str1)
{
    std::string r;

    int i = 0;

    int j = str1.length();
    j--;
    for (i = 0; i < str1.length(); i++)
    {

        r[i] = str1[j];
        j--;
    }
    r[i] = '\0';

    for (int i = 0; r[i] != '\0'; i++)
    {
        std::cout << r[i];
    }

    std::cout << r;
}

int main()
{

    std::string str1;
    std::cout << "enter string 1: ";
    std::cin >> str1;

    std::string str2;
    std::cout << "enter string 2: ";
    std::cin >> str2;

    len(str1);
    std::cout << "\n";
    check(str1, str2);
    std::cout << "\n";
    cpy(str1, str2);
    std::cout << "\n";
    concatenate(str1, str2);
    std::cout << "\n";
    reverse(str1);
}
