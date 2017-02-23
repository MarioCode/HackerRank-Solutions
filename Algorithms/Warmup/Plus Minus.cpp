#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    float pos = 0, neg =0;

    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }

    cout.precision(6);
    cout << pos / n << endl << neg / n << endl << (n - (pos + neg)) / n;

    return 0;
}
