#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+1, size-1, key);
    }
}

int main(){
    int arr[10] = {1, 2, 3, 4, 55, 66, 77, 88, 99, 100};
    int size = 10;
    int key = 101;

    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"yes present!";
    }
    else{
        cout<<"Not present";
    }
}