#include <iostream>
#include <set>

std::string convertToCamelCase(std::string str)
{
    const std::set<char> delimitedChars = {'-', '_'};
    std::string camelCase = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (!delimitedChars.count(str[i]))
        {
            camelCase += str[i];
        }
        else
        {
            (str[i + 1]) && (str[i + 1] = toupper(str[i + 1]));
        }
    }

    return camelCase;
}

int main()
{
    std::cout << convertToCamelCase("the_stealth_warrior") << std::endl;
    return 0;
}