// Inverted Right Triangle Star Pattern
// *****
// **** 
// ***  
// **   
// *  
#include<iostream>
using namespace std;
int main(){
     int i,j,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i =rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {    
             cout<<"*";
          
        }     
        cout<<endl;
    }
    return 0;
}