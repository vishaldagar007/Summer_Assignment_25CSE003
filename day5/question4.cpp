#include <iostream>
using namespace std;

int main()
{
    int number, largestPrimeFactor = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        while (number % i == 0)
        {
            largestPrimeFactor = i;
            number /= i;
        }
    }
    cout << "Largest Prime Factor = "
         << largestPrimeFactor << endl;

    return 0;
}