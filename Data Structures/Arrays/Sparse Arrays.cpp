#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int size = 0, queries = 0;

	cin >> size;
	vector<string> letters(size);

	for (int i = 0; i < size; ++i)
		cin >> letters[i];

	cin >> queries;

	for (int i = 0; i < queries; ++i)
    {
		string str;
		cin >> str;

		int count = std::count(letters.begin(), letters.end(), str);
		cout << count << endl;
	}

	return 0;
}
