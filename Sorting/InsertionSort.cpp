#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}



int main(){
    int arr[10] = {2, 7, 34, 32, 43, 10, 56, 5, 90, 12};
    insertionSort(arr, 10);
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}