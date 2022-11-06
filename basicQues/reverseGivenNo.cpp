#include<iostream>
using namespace std;
int main(){
  int no;
  cin>>no;
  int reverseno=0;
  
  while(no>0){

    reverseno=(reverseno+(no%10))*10;
    cout<<reverseno<<endl;
    no=no/10;  
  }
  reverseno=reverseno*0.1;
  
  cout<<reverseno;
      
return 0;
}