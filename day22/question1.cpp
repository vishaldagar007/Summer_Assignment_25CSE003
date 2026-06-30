#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int i = 0, j = str.length() - 1;

    while(i < j)
    {
        if(str[i] != str[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if(isPalindrome(str))
        cout << str << " is a Palindrome String";
    else
        cout << str << " is not a Palindrome String";

    return 0;
}