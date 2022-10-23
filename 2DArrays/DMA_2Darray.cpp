#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;
    // creating dynamic 2d array:
    int **arr = new int* [row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }
    // creation ends;

    // Taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // Printing the array:
    cout<<"2D array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // releasing memory:
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;

}
