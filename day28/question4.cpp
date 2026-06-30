#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
};

int main()
{
    Contact c;

    cout << "Enter Name: ";
    getline(cin, c.name);

    cout << "Enter Phone Number: ";
    getline(cin, c.phone);

    cout << "Enter Email: ";
    getline(cin, c.email);

    cout << "\n----- Contact Details -----" << endl;
    cout << "Name         : " << c.name << endl;
    cout << "Phone Number : " << c.phone << endl;
    cout << "Email        : " << c.email << endl;

    return 0;
}