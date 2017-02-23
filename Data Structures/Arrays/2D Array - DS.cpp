#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int array[6][6] = { 0 };
    std::vector<int> Sum;

    for(int i = 0; i < 6; ++i)
        for(int j = 0; j < 6; ++j)
            std::cin >> array[i][j];

    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            int cur_sum = array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] +
                         array[i+2][j] + array[i+2][j+1] + array[i+2][j+2];

            Sum.push_back(cur_sum);
        }


    sort(Sum.begin(), Sum.end());

    std::cout << Sum.at(15);

    return 0;
}
