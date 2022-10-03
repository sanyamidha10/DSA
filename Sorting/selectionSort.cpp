#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}


int main(){
    int arr[8] = {34, 76, 45, 21, 33, 6, 8, 9};
    selectionSort(arr, 8);
    for(int i=0; i<8; i++){
        cout<< arr[i] << " ";
    }
}