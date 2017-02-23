#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int n = 0;
        int count = 0;

        cin >> n;
        int tmp = n;

        while (tmp > 0)
        {
            if ((tmp % 10 != 0) && (n % (tmp % 10) == 0))
                count++;
            tmp /= 10;
        }

        cout << count << endl;
    }

    return 0;
}
