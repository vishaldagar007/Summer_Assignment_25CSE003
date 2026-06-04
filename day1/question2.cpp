#include <iostream>
using namespace std;
int multiplicationtable(int n) {
    cout << "multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
int main() {
    int n;
    cout << "enter the value of n:";
    cin >> n;
    multiplicationtable(n);
    return 0;
}
