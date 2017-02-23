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

    for (auto it = map.begin(); it!= map.end(); ++it)
        while (it->second > 0)
        {
            cout << it->first << " ";
            it->second--;
        }

    return 0;
}
