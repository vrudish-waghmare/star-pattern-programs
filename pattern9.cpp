// Hollow Right Triangle Star Pattern
// *
// **
// * *
// *  *
// *****
#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i =1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==rows||i==j||i==1|| j==1){

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