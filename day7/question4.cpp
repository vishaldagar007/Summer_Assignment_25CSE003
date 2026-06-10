#include <iostream>
using namespace std;

int reverseNum = 0;

// Recursive function to reverse number
void reverseNumber(int n)
{
    if (n == 0)
        return;

    reverseNum = reverseNum * 10 + (n % 10);

    reverseNumber(n / 10);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    reverseNumber(number);

    cout << "Reversed Number = " << reverseNum;

    return 0;
}