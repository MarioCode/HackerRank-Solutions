#include <vector>
#include <iostream>

int main()
{
    int n = 0;
    long long int sum = 0;

    std::cin >> n;
    std::vector<int> arr(n);

    for(int i = 0; i < n; ++i)
    {
       std::cin >> arr[i];
       sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
