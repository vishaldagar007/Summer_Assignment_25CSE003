#include <iostream>
using namespace std;
int reversenum(int n){
    int rev=0;
    while(n!=0){
        rev= rev*10 + n%10;
        n /=10;
        }
return rev;

}
int main(){
    int n; 
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"the reverse of the number "<<n<<" is :"<<reversenum(n)<<endl;
    return 0;
}