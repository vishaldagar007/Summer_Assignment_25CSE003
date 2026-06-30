#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, movie;
    int seats;
    float price, total;

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Movie Name: ";
    getline(cin, movie);

    cout << "Enter Number of Seats: ";
    cin >> seats;

    cout << "Enter Ticket Price: ";
    cin >> price;

    total = seats * price;

    cout << "\n----- Ticket Details -----" << endl;
    cout << "Customer Name : " << name << endl;
    cout << "Movie Name    : " << movie << endl;
    cout << "Seats Booked  : " << seats << endl;
    cout << "Total Amount  : " << total << endl;

    return 0;
}