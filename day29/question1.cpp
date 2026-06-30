#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice)
        {
            case 1:
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Result = " << a * b;
                break;

            case 4:
                if(b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by Zero is not Possible.";
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}