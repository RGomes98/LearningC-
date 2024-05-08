#include <iostream>
#include <vector>

std::vector<int> moveZeroes(const std::vector<int> input)
{
    std::vector<int> result;
    int zeroesCount = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 0)
        {
            zeroesCount++;
        }
        else
        {
            result.push_back(input[i]);
        }
    }

    for (int i = 0; i < zeroesCount; i++)
    {
        result.push_back(0);
    }

    return result;
}

int main()
{
    moveZeroes({1, 2, 0, 1, 0, 1, 0, 3, 0, 1});
    return 0;
}