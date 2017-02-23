#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0, k = 0, end = 0;
    int energy = 100;

    cin >> n >> k;
    vector<int> clouds(n);

    for (int i = 0; i < n; ++i)
        cin >> clouds[i];

    do {
        end = (end + k) % n;
        energy--;

        if (clouds[end] == 1)
            energy -= 2;

    } while (end != 0);

    cout << energy;

    return 0;
}
