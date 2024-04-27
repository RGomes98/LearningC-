#include <iostream>

using namespace std;

string rot13(const string msg)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string cipheredMessage = "";

    for (int i = 0; i < msg.size(); i++)
    {
        int initialPosition = alphabet.find(tolower(msg[i]));
        bool isUpperCase = msg[i] == toupper(msg[i]);
        int cipherShiftCount = 13;

        if (initialPosition == -1)
        {
            cipheredMessage += msg[i];
            continue;
        }

        while (cipherShiftCount > 0)
        {
            initialPosition++;
            cipherShiftCount--;

            if (initialPosition == alphabet.size())
            {
                initialPosition = 0;
            }
        }

        cipheredMessage += isUpperCase ? toupper(alphabet[initialPosition]) : alphabet[initialPosition];
    }

    return cipheredMessage;
}

int main()
{
    cout << rot13("EtNc.rtzcZQTedFd,JaK") << endl;
    return 0;
}