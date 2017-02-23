#include <iostream>

int main()
{
    int a0 = 0, a1 = 0, a2 = 0;
    std::cin >> a0 >> a1 >> a2;

    int b0 = 0, b1 = 0, b2 = 0;
    std::cin >> b0 >> b1 >> b2;

    int Alice = 0, Bob = 0;

    Alice   = ((a0 > b0) ? 1 : 0) + ((a1 > b1) ? 1 : 0) + ((a2 > b2) ? 1 : 0);
    Bob     = ((a0 < b0) ? 1 : 0) + ((a1 < b1) ? 1 : 0) + ((a2 < b2) ? 1 : 0);

    std::cout << Alice << " " << Bob;

    return 0;
}
