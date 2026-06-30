#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
};

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    cout << "\n----- Library Record -----" << endl;
    cout << "Book ID     : " << b.bookId << endl;
    cout << "Book Title  : " << b.title << endl;
    cout << "Author      : " << b.author << endl;

    return 0;
}