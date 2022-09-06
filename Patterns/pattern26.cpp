//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }

        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;

    }
}