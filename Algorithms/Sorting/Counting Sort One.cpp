#include <iostream>
#include <map>

using namespace std;

int main()
{
    int size = 0, n = 0;

    cin >> size;
    map <int, int> map;

    for (int i = 0; i < size; ++i)
    {
        cin >> n;
        map[n]++;
    }

    for (int i = 0; i < map.size(); ++i)
        cout << map[i] << " ";

    return 0;
}
