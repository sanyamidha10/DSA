#include<iostream>
using namespace std;

void reverse_array(int array[], int size){
    int start = 0;
    int end = size -1;
    while(start<=end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int array[100];
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    reverse_array(array, size);
    cout<<"The reversed array is here: "<<endl;
    print_array(array, size);
}