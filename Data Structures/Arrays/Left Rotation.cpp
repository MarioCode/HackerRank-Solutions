#include <iostream>

using namespace std;

int main()
{
	int size = 0, l_pos = 0;
    int *array = NULL;

	cin >> size >> l_pos;
	array = new int[size];

	for (int i = 0; i < size; ++i)
		cin >> array[i];

    for (int i = 0; i < size; ++i, ++l_pos)
    {
        if (l_pos == size)
            l_pos = 0;

        cout << array[l_pos] << " ";
    }

    return 0;
}
