// Hollow Rhombus Star Pattern
//         * * * * * 
//       *       *
//     *       * 
//   *       *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i =rows;i>=1;i--){
        for(j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
         for(k=1;k<=rows;k++){
         if(i==1 ||i==rows || k==1 || k==rows){
          
            cout<<"* ";
           }
           else{
              cout<<"  ";
           }
         }
        
        cout<<endl;
    }
    return 0;
}