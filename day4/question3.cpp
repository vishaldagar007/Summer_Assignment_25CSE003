#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber, digit;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }
    if (sum == originalNumber)
        cout << originalNumber << " is an Armstrong Number.";
    else
        cout << originalNumber << " is not an Armstrong Number.";
    return 0;
}