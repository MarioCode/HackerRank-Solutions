#include <vector>
#include <iostream>

using namespace std;

void quickSort(vector<int> &vec, int start, int end);

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec (size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    quickSort(vec, 0, vec.size() - 1);

    return 0;
}

void quickSort(vector<int> &vec, int start, int end)
{
    if (start >= end)
        return;

    int pos = start;
    for (int i = start; i < end; ++i)
        if (vec[i] < vec[end])
        {
            swap(vec[pos], vec[i]);
            pos++;
        }

    swap(vec[pos], vec[end]);

    for (int pos : vec)
        cout << pos << " ";
	cout << endl;

    quickSort(vec, start, pos - 1);
    quickSort(vec, pos + 1, end);
}
