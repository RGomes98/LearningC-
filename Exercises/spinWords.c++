#include <iostream>
#include <vector>

using namespace std;

vector<string> splitString(const string str, const char delimiter)
{
    vector<string> words;

    for (int i = 0; i < str.size(); i++)
    {
        string word = "";
        int current = i;

        while (str[current] != delimiter && current < str.size())
        {
            word += str[current];
            current++;
        }

        i = current;
        words.push_back(word);
    }

    return words;
}

string spinWords(const string str)
{
    vector<string> words = splitString(str, ' ');
    string result = "";

    for (int i = 0; i < words.size(); i++)
    {
        bool isReversed = words[i].size() >= 5;

        for (int j = isReversed ? words[i].size() - 1 : 0; isReversed ? j >= 0 : j < words[i].size(); isReversed ? j-- : j++)
        {
            result += words[i][j];
        }

        if (i < words.size() - 1)
        {
            result += " ";
        }
    }

    return result;
}

int main()
{
    cout << spinWords("Burgers are my favorite fruit") << endl;
    return 0;
}