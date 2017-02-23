#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> h(26);
    string word;
    int max_h = 1;

    for (int i = 0; i < 26; ++i)
        cin >> h[i];

    cin >> word;

    for (int i = 0; i < word.length(); ++i)
    {
        if (h[word[i] - 97] > max_h)
            max_h = h[(word[i]) - 97];
    }

    cout << word.length() * max_h;

    return 0;
}
