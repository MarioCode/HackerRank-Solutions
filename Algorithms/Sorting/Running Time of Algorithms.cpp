#include <vector>
#include <iostream>

using namespace std;

void insertionSort(vector<int> vec);

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec (size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    insertionSort(vec);

    return 0;
}

void insertionSort(vector<int> vec)
{
    int count = 0;
    int j = 0;
    int val = 0;

    for (int i = 1; i < vec.size(); ++i)
    {
        j = i - 1;
        val = vec[i];

        while (j > -1 && val < vec[j])
        {
            vec[j+1] = vec[j];
            count++;
            j -= 1;
        }
        vec[j+1] = val;
    }

    cout << count;
}
