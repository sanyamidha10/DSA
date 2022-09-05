// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int start = n;
        int col = 1;
        while(col<=n){
            cout<<start<<" ";
            start--;
            col++;
        }
        cout<<endl;
        row++;
    }
}