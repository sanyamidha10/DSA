#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
}

int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 10};

    int size = 11;

    int ans = isSorted(arr, size);
    if(ans){
        cout<<"Sorted!"<<endl;
    }
    else{
        cout<<"Not sorted!"<<endl;
    }
}