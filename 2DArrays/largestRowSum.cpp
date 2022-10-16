#include<iostream>
using namespace std;

int largest_row_sum(int arr[][3], int row, int col){
    int max = INT32_MIN;
    int rowIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }

        cout<<"sum of "<<i<<" row is "<<sum<<endl;
        if(sum > max){
            max = sum;
            rowIndex = i;
        }
    }

    cout<<"The maximum sum is "<<max<<endl;
    cout<<"The row number with maximum sum is "<<rowIndex<<endl;
}

int main(){
    int arr[3][3];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the 2D array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    largest_row_sum(arr, 3, 3);
}