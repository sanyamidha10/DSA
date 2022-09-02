// 11111
// 22222
// 33333
// 44444
// 55555

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
}