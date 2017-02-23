#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n = 0, v = 0;
    cin >> v >> n;

    vector<int> vec (n);

    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];

        if (vec[i] == v)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
