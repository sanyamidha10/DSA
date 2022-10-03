#include<iostream>
using namespace std;

int binary_search(int array[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(key == array[mid]){
            return mid;
        }

        else if (key>array[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}


int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int array[100];
    cout<<"Enter the elements of array: remember to write in increasing order for this program: "<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter the element which you want to find in the array: "<<endl;
    cin>>key;

    int answer = binary_search(array, size, key);

    if(answer == -1){
        cout<<key<<"is not present in the array: ";
    }
    else{
        cout<<"Element is present at index "<<answer;
    }

}