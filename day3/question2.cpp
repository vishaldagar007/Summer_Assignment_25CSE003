#include <iostream>
using namespace std;

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
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start
         << " and " << end << " are:\n";

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}