#include<iostream>
using namespace std;
int rowWiseSum(int arr[][3], int row, int col){
    cout<<"Printing the row wise sum"<<endl;
    for (int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
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

    cout<<"Printing the array: ";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rowWiseSum(arr, 3, 3);

}