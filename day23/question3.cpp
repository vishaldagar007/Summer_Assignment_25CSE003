#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2)
{
    if(s1.length() != s2.length())
        return false;

    int freq[256] = {0};

    for(int i = 0; i < s1.length(); i++)
    {
        freq[(int)s1[i]]++;
        freq[(int)s2[i]]--;
    }

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if(isAnagram(s1, s2))
        cout << "Strings are Anagrams";
    else
        cout << "Strings are not Anagrams";

    return 0;
}