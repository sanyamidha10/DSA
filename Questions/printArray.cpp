#include<iostream>
using namespace std;

void takeInput(int array[], int size){
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
}

void printArray(int array[], int size){
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(int);
    takeInput(array, size);
    printArray(array, size);

}