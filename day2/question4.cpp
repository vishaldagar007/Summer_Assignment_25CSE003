#include <iostream>
using namespace std;
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main(){
    int n; 
    cout<<"enter the value of n:";
    cin>>n;
    
    if(n == reverse(n)){
        cout<<n<<" is a palindrome number."<<endl;
    }
    else{
        cout<<n<<" is not a palindrome number."<<endl;
    }
    return 0;
}