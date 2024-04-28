#include <iostream>

using namespace std;

int digitalRoot(const int n)
{
    string str = to_string(n);

    if (str.size() == 1)
    {
        return n;
    }

    int a = int(str[str.size() - 1] - '0');
    int b = stoi(str.substr(0, str.size() - 1));

    return digitalRoot(a + b);
}

int main()
{
    cout << digitalRoot(167346) << endl;
    return 0;
}