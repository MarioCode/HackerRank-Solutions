#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    long long int N = 0, M = 0, S = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N >> M >> S;

        long long int who = (S + M - 1) % N;

        (who == 0) ? (cout << N << endl) : (cout << who << endl);
    }

    return 0;
}
