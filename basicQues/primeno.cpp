#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime;
    for(int i=1;i<n;i++){
        if(n%i==0){
            
            prime=0;
            
        }
        else {
            prime=1;
        }
    }
    
    if(prime==0){
            cout<<" Number "<<n<<" is not prime.";
    }
    else {
            cout<<" Number "<<n<<" is prime no.";
    }
    
    
return 0;
}