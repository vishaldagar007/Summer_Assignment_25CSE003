#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, word = "", longest = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    str += ' ';

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            word += str[i];
        }
        else
        {
            if(word.length() > longest.length())
                longest = word;

            word = "";
        }
    }

    cout << "Longest Word: " << longest;

    return 0;
}