#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        for(int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }

        cout << "Sum of Row " << i + 1
             << " = " << sum << endl;
    }

    return 0;
}