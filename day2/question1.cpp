#include <iostream>
using namespace std;
int sumofdigit( int n) {  
    int sum=0;
    while(n!=0){
        sum+=n%10; 
        n /=10;
    }
    return sum;
}
int main() {
    int n;
    cout << "enter the value of n:";
    cin >> n;
    cout << "the sum of digits in " << n << " is:" << sumofdigit(n) << endl;
    return 0;
}