#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        if (number % 2 == 1)
        {
            count++;
        }

        number /= 2;
    }

    cout << "Number of Set Bits = " << count << endl;

    return 0;
}