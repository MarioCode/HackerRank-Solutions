#include <iostream>

int main()
{
    int a_size = 0;
    int *array = NULL;

    std::cin >> a_size;
    array = new int[a_size];

    for (int i = 0; i < a_size; ++i)
        std::cin >> array[i];

    for (int i = 0; i < a_size / 2; ++i)
    {
        int tmp = array[i];
        array[i] = array[a_size - i - 1];
        array[a_size - i - 1] = tmp;
    }

    for (int i = 0; i < a_size; ++i)
        std::cout << array[i] << " ";

    delete [] array;

    return 0;
}
