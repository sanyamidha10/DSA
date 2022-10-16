#include<iostream>
using namespace std;
int colWiseSum(int arr[][3], int row, int col){
    cout<<"Printing the col wise sum"<<endl;
    for (int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){
    cout<<"Enter the elements of array: "<<endl;
    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array: "<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    colWiseSum(arr, 3, 3);

}