// 1 2 3 
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    int start = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<start<<endl;
            start++;
            col++;
        }
        row++;
        cout<<endl;
    }
}