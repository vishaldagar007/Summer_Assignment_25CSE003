#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n===== ARRAY MENU =====" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Find Sum" << endl;
        cout << "3. Find Largest Element" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array: ";
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2:
            {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }

            case 3:
            {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Largest Element = " << max;
                break;
            }

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}