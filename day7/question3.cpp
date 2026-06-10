#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of Digits = " << sumOfDigits(number);

    return 0;
}