// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }


}