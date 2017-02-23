#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1 = 0, v1 = 0;
	int x2 = 0, v2 = 0;
	int diff = 0;

	cin >> x1 >> v1;
	cin >> x2 >> v2;

	if ((x1 != x2) && (v1 == v2))
	{
		cout << "NO";
		return 0;
	}

	diff = abs(x1 - x2);

	while(true)
	{
		if (abs(x1 - x2) == 0)
		{
			cout << "YES";
			break;
		}

		x1 += v1;
		x2 += v2;

		if (abs(x1 - x2) < diff)
		{
			diff = abs(x1 - x2);
			continue;
		}
		else
		{
			cout << "NO";
			break;
		}
	}

	return 0;
}
