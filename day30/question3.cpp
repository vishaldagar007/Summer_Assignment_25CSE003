#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    int id[n];
    string name[n];
    float salary[n];

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];

        cin.ignore();
    }

    cout << "\n----- Employee Details -----" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee ID : " << id[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Salary      : " << salary[i] << endl;
    }

    return 0;
}