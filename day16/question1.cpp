#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements:\n";

    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;

    cout << "Missing Number = " << totalSum - sum;

    return 0;
}