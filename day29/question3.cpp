#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a String: ";
    getline(cin, str);

    do
    {
        cout << "\n===== STRING MENU =====" << endl;
        cout << "1. Display String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Reverse String" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "String = " << str;
                break;

            case 2:
                cout << "Length = " << str.length();
                break;

            case 3:
            {
                cout << "Reversed String = ";
                for(int i = str.length()-1; i >= 0; i--)
                    cout << str[i];
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