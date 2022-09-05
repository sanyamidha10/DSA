// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}