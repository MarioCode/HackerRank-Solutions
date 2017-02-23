#include <iostream>
#include <climits>

using namespace std;

int main()
{
    long int arr[5] = { 0 };
    long int min = LONG_MAX, max = LONG_MIN, sum = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    cout << (sum - max) << " " << (sum - min);

    return 0;
}
