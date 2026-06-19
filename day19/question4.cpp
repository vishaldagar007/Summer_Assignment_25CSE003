#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int n, sum = 0;

    cout << "Enter order of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}