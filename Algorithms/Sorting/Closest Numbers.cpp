#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec (size);
    vector<int> result(size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    adjacent_difference(vec.begin(), vec.end(), result.begin());

    int minDiff = *min_element(result.begin() + 1, result.end());

    for (int i = 1; i < size; ++i)
    {
        if (result[i] == minDiff)
            cout << vec[i - 1] << " " <<  vec[i] << " ";
    }

    return 0;
}
