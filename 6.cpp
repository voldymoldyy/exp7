#include <iostream>

int search(int x, int n, int arr[])
{
    int match = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            match++;
        }
    }
    if (match >= 1)
    {
        std::cout << "found";
    }
    else
    {
        std::cout << "not found";
    }
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int x;
    std::cout << "enter check number: ";
    std::cin >> x;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    search(x, n, arr);
}