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
    for (int i = vec.size() - 1; i > 0; i--)
    {
        if (vec[i] < vec[i-1])
        {
            int tmp = vec[i];
            int j = i;

            while (j >= 1 && tmp < vec[j-1])
            {
                vec[j] = vec[j-1];
                j--;
                printVec(vec);
            }
            vec[j] = tmp;
        }
    }

    printVec(vec);
}

void printVec(vector<int> vec)
{
    for (const auto& elem : vec)
        cout << elem << " ";

    cout << endl;
}
