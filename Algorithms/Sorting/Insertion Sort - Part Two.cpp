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
	int min = vec[0];

    for (int i = 1; i < vec.size(); ++i)
    {
		if (vec[i] > min)
			min = vec[i];
		else
        {
			int j = i;
			int tmp = vec[i];

			while (j >= 1 && vec[j-1] > tmp)
            {
				int tmp2 = vec[j];
				vec[j] = vec[j-1];
				vec[j-1] = tmp2;
				j--;
			}
		}
	    printVec(vec);
	}
}

void printVec(vector<int> vec)
{
	for (const auto& elem : vec)
        cout << elem << " ";

    cout << endl;
}
