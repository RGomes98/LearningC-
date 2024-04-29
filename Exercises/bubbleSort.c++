#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i; j++)
        {
            if (j + 1 < vec.size() && vec[j + 1] < vec[j])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> numbers = {8, 1, 4, 6, 9, 6, 4, 8, 9, 2, 1, 2, 3, 4, 7, 6};
    bubbleSort(numbers);

    for (auto x : numbers)
        cout << x << ' ';

    return 0;
}