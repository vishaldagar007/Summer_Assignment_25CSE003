#include <iostream>
using namespace std;
int countdigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
int main() {
    int n;
    cout << "enter the value of n:";
    cin >> n;
    cout << "the number of digits in " << n << " is:" << countdigits(n) << endl;
    return 0;
} 