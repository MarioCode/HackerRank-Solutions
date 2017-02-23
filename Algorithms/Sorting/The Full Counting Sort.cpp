#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size = 0, num = 0;
    string str;

    cin >> size;
    vector<string> vector[100];

    for (int i = 0; i < size; ++i)
    {
        cin >> num >> str;

        (i >= size / 2) ? vector[num].push_back(str) : vector[num].push_back("-");
    }

    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < vector[i].size(); ++j)
            cout << vector[i][j] << " ";

    return 0;
}
