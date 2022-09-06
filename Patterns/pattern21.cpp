// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int spaces = row - 1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = n-row+1;
        while(col){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
}