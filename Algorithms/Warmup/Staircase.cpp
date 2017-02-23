#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int range = n - i - 1;

        for (int j = 0; j < range; ++j)
            std::cout <<  " ";

        for (int j = range; j < n; ++j)
            std::cout << "#";

        std::cout << std::endl;
    }

    return 0;
}
