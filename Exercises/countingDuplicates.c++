#include <iostream>
#include <map>

int countingDuplicates(std::string str)
{
    std::map<char, int> charsCount = {};
    std::string uniqueChars = "";
    int duplicateCount = 0;

    for (int i = 0; i < str.size(); i++)
    {
        char lowerCaseChar = tolower(str[i]);

        if (!charsCount[lowerCaseChar])
        {
            uniqueChars += lowerCaseChar;
            charsCount[lowerCaseChar] = 0;
        }

        charsCount[lowerCaseChar]++;
    }

    for (int i = 0; i < uniqueChars.size(); i++)
    {
        if (charsCount.at(uniqueChars[i]) > 1)
        {
            duplicateCount++;
        }
    }

    return duplicateCount;
}

int main()
{
    std::cout << countingDuplicates("abcdeaa") << std::endl;
    return 0;
}