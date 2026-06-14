#include <iostream>
using namespace std;
void inputArray(int arr[], int n)
{
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void displayArray(int arr[], int n)
{
    cout << "Array elements are:\n";
   for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    inputArray(arr, n);
    displayArray(arr, n);
    return 0;
}
