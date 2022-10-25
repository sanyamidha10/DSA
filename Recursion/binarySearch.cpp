#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }

    mid = s+(e-s)/2;
    
    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
    
    
}

int main(){
    int arr[5] = {1, 3, 45, 330, 339};
    int size = 5;
    int key = 338;

    int ans = binarySearch(arr, 0, 4, key);
    if(ans == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Yes found at " <<ans;
    }
}