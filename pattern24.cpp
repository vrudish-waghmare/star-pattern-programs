// Plus Star Pattern
//     + 
//     +
// + + + + +
//     +
//     +
#include<iostream>
using namespace std;
int main(){
   int i,j,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        if(i== (rows/2)+1){
           for(j=1;j<=rows;j++)
        {    
            cout<<"+ ";
        }
        }
        else{
           for(j=1;j<=rows/2;j++){
               cout<<"  ";
           }  
           cout<<"+ "; 
        }
            
        cout<<endl;
    }
    return 0;
}