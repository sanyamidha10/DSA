#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i =1; i<n; i++){
        bool swapped = false;
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false){
            break;
        }

    }
}

int main(){
    int arr[8] = {23, 54, 76, 34, 24, 12, 90, 79};
    bubbleSort(arr, 8);
    for(int i =0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}