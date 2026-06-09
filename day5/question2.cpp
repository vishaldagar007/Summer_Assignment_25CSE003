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

        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == originalNumber)
        cout << originalNumber << " is a Strong Number.";
    else
        cout << originalNumber << " is not a Strong Number.";

    return 0;
}