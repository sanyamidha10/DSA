// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int start = row;
        int col = 1;
        while(col<=row){
            cout<<start<<" ";
            start--;
            col++;
        }
        row++;
        cout<<endl;
    }
}