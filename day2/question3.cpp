#include <iostream>
using namespace std;
int productofdigit(int n){
    int product=1;
    while(n!=0){
        product*=n%10;
        n/=10;
    }
    return product;
}
int main(){
    int n; 
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"the product of the digits in "<<n<<" is :"<<productofdigit(n)<<endl;
    return 0;
}