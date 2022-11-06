#include<iostream>
using namespace std;
int main(){
    // for (int i=5;i>0;i--)
    // {    
    //     for(int j =1;j<=i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<5;i++){
        
    // }
 /*

 1 
 0 1 
 1 0 1 
 0 1 0 1 
 1 0 1 0 1


 */
    // for(int i=1 ;i<=5 ;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0&&j%2==0){
    //             cout<<"1";
    //         }
    //         else if(i%2!=0&&j%2!=0){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int rows=10;
    
    // for(int i=rows;i>0;i--){
        
    //    for(int j=1;j<=rows-i;j++){
    //     cout<<" ";
    //    }
    //     for(int j=1;j<=rows;j++)
    //     {
    //         cout<<"*"; 
    //     }        
      
    //     cout<<endl;
    // }
    // int r =5;
    // for (int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=5-i;j++){
    //         cout<<" "; 
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
   for(int i=1;i<=5;i++){
  	for(int j=1;j<=5-i;j++){
        cout<<" ";
    }
    
        for(int j=i;j>0;j--){
        
          cout<<j<<" ";
        }
    if(i>1){
        for(int j=2;j<=i;j++){
          cout<<j<<" ";
        }
    }
    cout<<endl;
  }
return 0;
}