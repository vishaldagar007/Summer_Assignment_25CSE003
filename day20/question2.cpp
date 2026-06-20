#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int n;
    int symmetric = 1;

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
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
    {
        cout << "Matrix is Symmetric";
    }
    else
    {
        cout << "Matrix is Not Symmetric";
    }

    return 0;
}