#include <vector>
#include <iostream>

using namespace std;

int main()
{
    long int size = 0, values = 0, *array = NULL;
    long int p = 0, q = 0, sum = 0, max = 0 , x = 0;

    cin >> size >> values;
    array = new long int[size + 1];

    for (int i = 0; i < values; ++i)
    {
        cin >> p >> q >> sum;
        array[p] += sum;

        if ((q + 1) <= size)
            array[q+1] -= sum;
    }

    for(int i = 1; i <= size; ++i)
    {
       x = x + array[i];
       if (max < x)
           max = x;
    }

    cout << max;

    return 0;
}
