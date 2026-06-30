#include <iostream>
#include <string>
using namespace std;

void display(int roll[], string name[], float marks[], int n)
{
    cout << "\n----- Student Records -----" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "\nRoll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
    }
}

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    int roll[n];
    string name[n];
    float marks[n];

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll No: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];

        cin.ignore();
    }

    display(roll, name, marks, n);

    return 0;
}