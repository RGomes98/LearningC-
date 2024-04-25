#include <iostream>
#include <vector>

using namespace std;

vector<char> uniqueInOrder(const string iterable)
{
    vector<char> result;

    for (int i = 0; i < iterable.size(); i++)
    {
        char currentCharacter = iterable[i];
        int currentPosition = i;

        result.push_back(currentCharacter);

        while (iterable[currentPosition] == currentCharacter)
        {
            currentPosition++;
        }

        i = currentPosition - 1;
    }

    return result;
};

int main()
{
    uniqueInOrder("AAAABBBCCDAABBB");
    return 0;
}
