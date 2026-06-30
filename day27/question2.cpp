#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Salary: ";
    cin >> e.salary;

    cout << "\n----- Employee Details -----" << endl;
    cout << "Employee ID : " << e.id << endl;
    cout << "Name        : " << e.name << endl;
    cout << "Salary      : " << e.salary << endl;

    return 0;
}