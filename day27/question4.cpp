#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n----- Marksheet -----" << endl;
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade : A+";
    else if(percentage >= 75)
        cout << "Grade : A";
    else if(percentage >= 60)
        cout << "Grade : B";
    else if(percentage >= 40)
        cout << "Grade : C";
    else
        cout << "Grade : Fail";

    return 0;
}