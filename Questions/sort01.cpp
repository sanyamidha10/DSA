#include<iostream>
using namespace std;

void sort01(int array[], int size){
    int left = 0;
    int right = size-1;

    while(left<right){
        while(array[left]==0 && left<right){
            left++;
        }
        while(array[right] == 1 && left<right){
            right --;
        }

        if(array[left]==1 && array[right]==0 && left<right){
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int array[8] = {0,1,0,1,1,0,0,1};
    sort01(array, 8);
    for(int i=0; i<8; i++){
        cout<<array[i]<<" ";
    }
}