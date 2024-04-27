#include <iostream>
#include <vector>

using namespace std;

vector<char> uniqueInOrder(const string iterable)
{
    vector<char> result;

    for (int i = 0; i < iterable.size(); i++)
    {
        char currentCharacter = iterable[i];

        if (!result.size() || result[result.size() - 1] != currentCharacter)
        {
            result.push_back(currentCharacter);
        }
    }

    return result;
};

int main()
{
    uniqueInOrder("AAAABBBCCDAABBB");
    return 0;
}
