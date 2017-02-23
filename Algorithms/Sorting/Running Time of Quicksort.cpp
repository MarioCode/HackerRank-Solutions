#include <vector>
#include <iostream>

using namespace std;
int count_qs;

void quickSort(vector<int> &vec, int start, int end);
int insertionSort(vector<int> vec);

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec (size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    int inserCount = insertionSort(vec);

    quickSort(vec, 0, vec.size() - 1);

    cout <<  inserCount - count_qs;
    return 0;
}

int insertionSort(vector<int> vec)
{
    int count = 0, val = 0;
    int j = 0;

    for (int i = 1; i < vec.size(); ++i)
    {
        j = i - 1;
        val = vec[i];

        while (j >= 0 && val < vec[j])
        {
            vec[j+1] = vec[j];
            count++;
            j--;
        }
        vec[j+1] = val;
    }

    return count;
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
            count_qs++;
        }

    count_qs++;
    swap(vec[pos], vec[end]);

    quickSort(vec, start, pos-1);
    quickSort(vec, pos+1, end);
}
