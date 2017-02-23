#include <iostream>

using namespace std;

int main()
{
    int T = 0, n = 0;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> n;
        int h = 1;

        for (int j = 0; j < n; ++j)
            (j % 2 == 0) ? (h = h * 2) : (h++);

        cout << h << endl;
    }

    return 0;
}
