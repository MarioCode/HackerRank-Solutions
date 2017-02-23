#include <vector>
#include <iostream>

using namespace std;

void insertionSort(vector<int> vec);
void printVec(vector<int> vec);

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec(size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    insertionSort(vec);

    return 0;
}

void insertionSort(vector<int> vec)
{
    int value = 0;
    int j = 0;

    for (int i = 1; i < vec.size(); ++i)
    {
        value = vec[i];
        j = i - 1;

        while (j >= 0 && value < vec[j])
        {
            vec[j+1] = vec[j];
            j = j - 1;
        }

        if (j < -1)
            j = -1;

        vec[j+1] = value;
    }

    printVec(vec);
}

void printVec(vector<int> vec)
{
	for (const auto& elem : vec)
        cout << elem << " ";

    cout << endl;
}
