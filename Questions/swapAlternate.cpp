#include<iostream>
using namespace std;

void swapAlternate(int array[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(array[i], array[i+1]);
        }
    }
}


int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int array[100];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    swapAlternate(array, size);
    cout<<"Swapping the alternates"<<endl;
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    
}