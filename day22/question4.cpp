#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string str)
{
    string result = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
            result += str[i];
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing spaces: " << removeSpaces(str);

    return 0;
}