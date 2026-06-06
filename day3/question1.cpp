#include <iostream>
using namespace std;

int primecheck(int n){
    if(n <= 1) 
    return 0; 
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) 
        return 0; 
    }
    return 1; //for prime number we return 1

}
int main(){
    int n; 
    cout<<"enter the value of n:";
    cin>>n;
    
    if(primecheck(n)==1){
        cout<<n<<" is prime "<<endl;
    }
    else{
        cout<<n<<" not a prime "<<endl;
    }
    return 0;
}