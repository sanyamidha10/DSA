// D
// C D 
// B C D 
// A B C D
// In this, we have to calculate the starting character of each row, and further increment it by one.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A' + n - row;
        while(col<=row){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}