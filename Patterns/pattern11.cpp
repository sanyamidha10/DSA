// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A' + row - 1;
        while(col<=n){
            cout<<ch;
            col++;
        }
        row++;
        cout<<endl;
    }
}

