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
    {
        freq[(int)str[i]]++;

        if(freq[(int)str[i]] == 2)
        {
            cout << "First Repeating Character: " << str[i];
            return 0;
        }
    }

    cout << "No Repeating Character Found.";

    return 0;
}