#include<iostream>
using namespace std;

int sum_of_array(int array[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;

    int array[100];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    cout<<"Sum of all the elements of array is = "<<sum_of_array(array, size);
    
}