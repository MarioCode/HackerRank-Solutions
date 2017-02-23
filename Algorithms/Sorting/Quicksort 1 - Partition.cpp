#include <vector>
#include <iostream>

using namespace std;

void partition(vector<int>  fullVec);

int main(void)
{
    int size = 0;

    cin >> size;
    vector<int> vec (size);

    for (int i = 0; i < size; ++i)
        cin >> vec[i];

    partition(vec);

    return 0;
}

void partition(vector<int>  fullVec)
{
    if (fullVec.empty())
        return;

    int p = fullVec[0];
    vector< vector<int> > vec(3, vector<int>(0));

    for (int i = 0; i < fullVec.size(); ++i)
    {
        if (fullVec[i] < p)
            vec[0].push_back(fullVec[i]);
        else if (fullVec[i] > p)
            vec[2].push_back(fullVec[i]);
        else
            vec[1].push_back(fullVec[i]);
    }

    for (int i = 0; i < vec.size(); ++i)
        for (int j = 0; j < vec[i].size(); ++j)
            cout << vec[i][j] << " ";
}
