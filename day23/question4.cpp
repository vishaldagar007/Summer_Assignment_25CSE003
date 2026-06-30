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

    int max = 0;
    char ch;

    for(int i = 0; i < str.length(); i++)
    {
        if(freq[(int)str[i]] > max)
        {
            max = freq[(int)str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum Occurring Character: " << ch << endl;
    cout << "Frequency: " << max;

    return 0;
}