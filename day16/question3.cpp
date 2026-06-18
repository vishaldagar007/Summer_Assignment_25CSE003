#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, target;
    int found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "Pair Found: "
                     << arr[i] << " "
                     << arr[j];

                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
    {
        cout << "No Pair Found";
    }

    return 0;
}