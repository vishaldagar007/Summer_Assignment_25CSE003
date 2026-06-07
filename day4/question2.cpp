#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n == 1)
    {
        cout << "Nth Fibonacci Term = " << first;
    }
    else if (n == 2)
    {
        cout << "Nth Fibonacci Term = " << second;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Nth Fibonacci Term = " << second;
    }

    return 0;
}