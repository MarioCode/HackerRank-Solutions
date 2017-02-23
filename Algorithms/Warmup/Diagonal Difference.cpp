#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int d1 = 0, d2 = 0;

    cin >> n;
    vector< vector<int> > a(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];

            if (i == j)
                d1 += a[i][j];

            if(i + j == n - 1)
                d2 += a[i][j];
        }
    }

    cout << "Difference sums of diagonals: " << abs(d1 - d2) << endl;

    return 0;
}
