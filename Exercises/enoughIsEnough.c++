#include <iostream>
#include <vector>
#include <map>

std::vector<int> enoughIsEnough(std::vector<int> arr, int n)
{
    std::map<int, int> numbers;
    std::vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        if (!numbers[arr[i]])
        {
            numbers[arr[i]] = 0;
        }

        numbers[arr[i]]++;

        if (numbers[arr[i]] <= n)
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main()
{
    enoughIsEnough({1, 1, 3, 3, 7, 2, 2, 2, 2}, 3);
    return 0;
}