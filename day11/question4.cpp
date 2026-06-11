#include <iostream>
using namespace std;

// Function to find factorial
int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial = "
         << factorial(number);

    return 0;
}