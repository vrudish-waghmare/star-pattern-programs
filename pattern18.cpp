// Inverted Pyramid Star Pattern
// *********
//  *******
//   *****
//    ***
//     *
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
            if(j>=i && j<=2*rows-i){
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