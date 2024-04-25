#include <iostream>
#include <set>

typedef std::set<char> vowels_t;

int vowelsCount(const std::string str)
{
    const vowels_t vowels{'a', 'e', 'i', 'o', 'u'};
    int vowelsCount = 0;

    for (int i = 0; i < str.size(); i++)
    {
        vowelsCount += vowels.count(str[i]);
    }

    return vowelsCount;
};

int main()
{
    std::cout << vowelsCount("abracadabra") << std::endl;
    return 0;
}
