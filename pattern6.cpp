// Mirrored Rhombus Star Pattern
// * * * * * 
//   * * * * *
//     * * * * *
//       * * * * * 
//         * * * * *
#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter the no of rows : ";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<i;j++)
        {
            cout<<"  ";
        }
         for(k=1;k<=rows;k++){
            cout<<"* ";
         }
        
        cout<<endl;
    }
    return 0;
}