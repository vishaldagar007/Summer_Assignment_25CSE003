#include <iostream>
using namespace std;
int main(){

    int n,sum=0;
    cout<<"enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
        sum+=i;
    }
    cout<<"sum of divisors of "<<n<<" is "<<sum;
    return 0;   
}

if(sum==n)
cout<<n<<" is a perfect number "<<endl;
else
cout<<n<<" is not a perfect number "<<endl;
 
return 0;       
}