// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n - row + 1){
            cout<<col;
            col++;
        }


    int star = 1;
    while(star<=((row-1)*2)){
    cout<<"*";
    star++;
    }

    int start = n-row+1;
    while(start){
        cout<<start;
        start--;
    }

    cout<<endl;
    row++;
    }

    
}