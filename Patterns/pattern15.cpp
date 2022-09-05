// A
// B B
// C C C
// D D D D


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A' + row -1;
        while(col<=row){
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}