#include <iostream>

int solveMeFirst(int a, int b);

int main()
{
    int num1 = 0, num2 = 0;
    int sum = 0;

    std::cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

int solveMeFirst(int a, int b)
{
    return a + b;
}
