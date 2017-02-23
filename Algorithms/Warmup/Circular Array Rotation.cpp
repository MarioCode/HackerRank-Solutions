#include <vector>
#include <iostream>

using namespace std;

vector<int> array_right_rotation(vector<int> a, int n, int diff);

int main()
{
    int n = 0, k = 0, q = 0, m = 0;
    cin >> n >> k >> q;

    vector<int> a(n);

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> output = array_right_rotation(a, n, k % n);

    for(int i = 0; i < q; ++i)
    {
        cin >> m;
        cout << output[m] << endl;
    }

    return 0;
}


vector<int> array_right_rotation(vector<int> a, int n, int diff)
{
    vector<int> output(n);

    for (int i = 0; i < n; ++i)
    {
        output[(n + diff + i) % n] = a[i];
    }

    return output;
}
