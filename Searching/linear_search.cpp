#include<iostream>
using namespace std;

int linear_search(int array[], int size, int key){
    for(int i=0; i<size; i++){
        if (array[i] == key){
            return i;
        }
    }

    return -1;
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

    int key;
    cout<<"Enter the element which you want to find in the array: "<<endl;
    cin>>key;

    int answer = linear_search(array, size, key);

    if(answer == -1){
        cout<<key<<"is not present in the array: ";
    }
    else{
        cout<<"Element is present at index "<<answer;
    }

}