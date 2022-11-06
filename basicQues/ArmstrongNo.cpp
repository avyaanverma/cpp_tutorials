#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int no;
  cin>>no;
  int a=no;
  int armstrongNo;
  while(no>0){
    armstrongNo=armstrongNo+pow(no%10,3);
    cout<<armstrongNo;
    no=no/10;
  }
  if(armstrongNo==a){
    cout<<" No is armstrong ";
  }
  else{
    cout<<" No is not armstrong ";
  }
          
return 0;
}