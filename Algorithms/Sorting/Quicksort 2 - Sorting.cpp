#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector <int> &arr);

int main()
{
    int size = 0;

    cin >> size;
    vector<int> vec(size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    vec = quickSort(vec);

    return 0;
}

vector<int> quickSort(vector<int> &vec)
{
    vector <int> left;
    vector <int> right;
    vector <int> result;

    int p = vec[0];

    for (int i = 1; i < vec.size(); ++i)
    {
        if (vec[i] < p)
            left.push_back(vec[i]);
        else if (vec[i] > p)
            right.push_back(vec[i]);
    }

    if (left.size() > 1)
        left = quickSort(left);
    if (right.size() > 1)
        right = quickSort(right);

    if (left.size() != 0)
    {
        for (int i = 0; i < left.size(); ++i)
        {
            cout << left[i] << " ";
            result.push_back(left[i]);
        }
    }

    result.push_back(p);
    cout << p << " ";

    if (right.size() != 0)
    {
        for (int i = 0; i < right.size(); ++i)
        {
            cout << right[i] << " ";
            result.push_back(right[i]);
        }
    }

    cout << endl;
    return result;
}
