#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &vec, int start, int pivot)
{
    int aux = start;

    for (int i = start; i < pivot; i++)
    {
        if (vec[i] <= vec[pivot])
        {
            int temp = vec[i];
            vec[i] = vec[aux];
            vec[aux] = temp;
            aux++;
        }
    }

    int temp = vec[pivot];
    vec[pivot] = vec[aux];
    vec[aux] = temp;

    return aux;
}

vector<int> quickSort(vector<int> &vec, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(vec, start, end);
        quickSort(vec, start, pivot - 1);
        quickSort(vec, pivot + 1, vec.size() - 1);
    }

    return vec;
}

int main()
{
    vector<int> numbers = {8, 1, 4, 6, 9, 6, 4, 8, 9, 2, 1, 2, 3, 4, 7, 6};

    for (auto x : quickSort(numbers, 0, numbers.size() - 1))
        cout << x << ' ';

    return 0;
}