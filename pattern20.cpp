// Half Diamond Star Pattern In Right Side
// *    
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
   int i,j,cols;
    cout<<"Enter the no of columns : ";
    cin>>cols;
    for(i=1;i<=2*cols-1;i++)
    {
        for(j=1;j<=cols;j++)
        {    
            if(j<=i && i+j<= 2*cols){
             cout<<"*";

            }
            else{
                cout<<" ";
            }
          
        }     
        cout<<endl;
    }
    return 0;
}