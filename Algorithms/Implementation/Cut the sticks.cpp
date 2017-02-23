#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 0;
    int min = 0;

    cin  >> size;
    cout << size << endl;
    vector<int> stick(size);

    for (int i = 0; i < size; ++i)
        cin >> stick[i];

    while (!stick.empty())
    {
        min = *min_element(stick.begin(), stick.end());

        for (int i = 0; i < stick.size(); ++i)
        {
            if ((stick[i] - min) <= 0)
            {
                stick.erase(stick.begin() + i);
				i--;
			}
			else stick[i] -= min;
        }

        if (stick.size() >= 1)
            cout << stick.size() << endl;
        else break;
    }

    return 0;
}
