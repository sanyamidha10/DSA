//       1
//     2 3
//   4 5 6
//7 8 9 10

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;

    int row = 1;
    int start = 1;
    while(row<=n){
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int col = 1;
        while(col<=row){
            cout<<start;
            start++;
            col++;
        }

        cout<<endl;
        row++;
    }
}