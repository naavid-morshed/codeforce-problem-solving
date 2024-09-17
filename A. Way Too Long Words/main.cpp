#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::string abbvr[n];
    for (int count = 0; count < n; count++)
    {
        std::cin >> abbvr[count];
    }

    for (int i = 0; i < sizeof(abbvr) / sizeof(abbvr[0]); i++)
    {
        if (abbvr[i].length() > 10)
        {
            abbvr[i] = abbvr[i].at(0) + std::to_string(abbvr[i].length() - 2) + abbvr[i].at(abbvr[i].length() - 1);
            std::cout << abbvr[i] << std::endl;
        }
        else
        {
            std::cout << abbvr[i] << std::endl;
        }
    }
}