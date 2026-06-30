#include <iostream>
#include <string>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Item item;

    cout << "Enter Item ID: ";
    cin >> item.id;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, item.name);

    cout << "Enter Quantity: ";
    cin >> item.quantity;

    cout << "Enter Price: ";
    cin >> item.price;

    cout << "\n===== INVENTORY DETAILS =====" << endl;
    cout << "Item ID   : " << item.id << endl;
    cout << "Item Name : " << item.name << endl;
    cout << "Quantity  : " << item.quantity << endl;
    cout << "Price     : " << item.price << endl;
    cout << "Total Cost: " << item.quantity * item.price << endl;

    return 0;
}