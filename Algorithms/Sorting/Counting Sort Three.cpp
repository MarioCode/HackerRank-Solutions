#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int size = 0, n = 0, count = 0;

    cin >> size;
    map <int, int> map;
    vector <string> vecStr (size);

    for (int i = 0; i < size; ++i)
    {
        cin >> n;
        cin >> vecStr[i];
        map[n]++;
    }

    for (auto it = map.begin(); it!= map.end(); ++it)
    {
        while (it->second > 0)
        {
            count++;
            it->second--;
        }
        cout << count << " ";
    }

    for (int i = 0; i < 100 - map.size(); ++i)
        cout << count << " ";

    return 0;
}
