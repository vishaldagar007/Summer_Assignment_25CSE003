#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    if(age >= 18)
        cout << name << " is Eligible to Vote.";
    else
        cout << name << " is Not Eligible to Vote.";

    return 0;
}