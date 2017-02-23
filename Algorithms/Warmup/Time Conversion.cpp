#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string time;
    cin >> time;

    int hour = (time[1] - 48) + 10 * (time[0] - 48);

    if (time[8] == 'P' && hour != 12)
		hour += 12;

    if (time[8] == 'A' && hour == 12)
		hour = 0 ;


    cout << setw(2) << setfill('0');
    cout << hour << time.substr(2, 6) << endl;

    return 0;
}
