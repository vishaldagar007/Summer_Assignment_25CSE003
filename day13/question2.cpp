#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}