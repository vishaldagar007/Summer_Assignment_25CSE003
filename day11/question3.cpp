#include <iostream>
using namespace std;

// Function to check prime
int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a Prime Number.";
    else
        cout << number << " is not a Prime Number.";

    return 0;
}