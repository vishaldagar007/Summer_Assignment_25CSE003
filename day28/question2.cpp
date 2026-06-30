#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    int accountNo;
    string name;
    float balance;
};

int main()
{
    BankAccount b;

    cout << "Enter Account Number: ";
    cin >> b.accountNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, b.name);

    cout << "Enter Balance: ";
    cin >> b.balance;

    cout << "\n----- Bank Account Details -----" << endl;
    cout << "Account Number : " << b.accountNo << endl;
    cout << "Holder Name    : " << b.name << endl;
    cout << "Balance        : " << b.balance << endl;

    return 0;
}