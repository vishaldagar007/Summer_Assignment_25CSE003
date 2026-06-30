#include <iostream>
#include <string>
using namespace std;

int countWords(string str)
{
    int count = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Number of words = " << countWords(str);

    return 0;
}