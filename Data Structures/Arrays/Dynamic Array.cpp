#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int size = 0, q = 0;
    int x = 0, y = 0;
    int lastAns = 0, type = 0, index = 0;

    cin >> size >> q;
    vector<vector<int> > seqList (size, vector<int>(0));

    for (int i = 0; i < q; ++i)
    {
        cin >> type >> x >> y;

        switch (type)
        {
            case 1:
                index = ((x ^ lastAns) % size);
                seqList.at(index).push_back(y);
            break;

            case 2:
				index = ((x ^ lastAns) % size);
                int size = seqList.at(index).size();
				lastAns = seqList.at(index).at(y % size);
				cout << lastAns << endl;
            break;
		}
    }

    return 0;
}
