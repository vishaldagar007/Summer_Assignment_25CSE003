#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool visited[256] = {false};

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing duplicates: ";

    for(int i = 0; i < str.length(); i++)
    {
        if(!visited[(int)str[i]])
        {
            cout << str[i];
            visited[(int)str[i]] = true;
        }
    }

    return 0;
}