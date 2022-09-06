// 1 2 3 4
//   2 3 4
//     3 4 
//       4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int spaces = row -1;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int col = n - row + 1;
        int value = row;
        while(col){
            cout<<value;
            value++;
            col--;
        }
        cout<<endl;
        row++;
    }
}