#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
        freq[(int)str[i]]++;

    for(int i = 0; i < str.length(); i++)
    {
        if(freq[(int)str[i]] == 1)
        {
            cout << "First Non-Repeating Character: " << str[i];
            return 0;
        }
    }

    cout << "No Non-Repeating Character Found.";

    return 0;
}