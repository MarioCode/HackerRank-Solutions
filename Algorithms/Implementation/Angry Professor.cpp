#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int n = 0, k = 0;
        int count = 0;

        cin >> n >> k;
        vector<int> vec(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];

            if (vec[i] <= 0)
                count++;
        }

        (count >= k) ? (cout << "NO" << endl) : (cout << "YES" << endl);
    }

    return 0;
}
