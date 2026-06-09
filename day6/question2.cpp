#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0, base = 1, digit;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + (digit * base);

        base *= 2;
        binary /= 10;
    }

    cout << "Decimal Equivalent = " << decimal << endl;

    return 0;
}