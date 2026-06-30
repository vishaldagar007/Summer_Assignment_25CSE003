#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    bool found[256] = {false};

    cout << "Common Characters: ";

    for(int i = 0; i < s1.length(); i++)
    {
        for(int j = 0; j < s2.length(); j++)
        {
            if(s1[i] == s2[j] && !found[(int)s1[i]])
            {
                cout << s1[i] << " ";
                found[(int)s1[i]] = true;
            }
        }
    }

    return 0;
}