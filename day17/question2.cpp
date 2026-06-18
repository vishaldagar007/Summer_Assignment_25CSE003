#include <iostream>
using namespace std;

int main()
{
    int arr1[50], arr2[50];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter first array elements:\n";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter second array elements:\n";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Union: ";

    for(int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }

    for(int i = 0; i < n2; i++)
    {
        int found = 0;

        for(int j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}