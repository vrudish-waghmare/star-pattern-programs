// Hollow Pyramid Star Pattern
//     *    
//    * *
//   *   *
//  *     *
// *********
#include<iostream>
using namespace std;
int main(){
   int i,j,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=2*rows-1;j++)
        {    
            if(i+j==rows+1 || j-i==rows-1 ||i == rows){
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