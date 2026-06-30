#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Books: ";
    cin >> n;

    int id[n];
    string title[n];

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[i]);
    }

    cout << "\n----- Library Books -----" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Book ID : " << id[i] << endl;
        cout << "Title   : " << title[i] << endl;
    }

    return 0;
}