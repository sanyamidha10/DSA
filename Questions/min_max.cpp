#include<iostream>
using namespace std;

int printMax(int arr[], int size){
    int max = INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int printMin(int arr[], int size){
    int min = INT32_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    cout<<"Maximum element of array is "<<printMax(array, size)<<endl;
    cout<<"Minimum element of array is "<<printMin(array, size)<<endl;

}