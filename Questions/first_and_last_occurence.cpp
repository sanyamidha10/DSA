#include<iostream>
using namespace std;

int firstoccurence(int array[], int size, int key){
    int s = 0;
    int e = size - 1;

    int mid = s + (e-s/2);
    int ans = -1;

    while(s<=e){
        if(array[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(array[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e-s/2);
    }
    return ans;
}

int lastoccurence(int array[], int size, int key){
    int s = 0;
    int e = size - 1;

    int mid = s + (e-s/2);
    int ans = -1;

    while(s<=e){
        if(array[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(array[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e-s/2);
    }
    return ans;
}

int main(){
    int array[7] = {2, 3, 3, 3, 3, 3, 5};

    cout<<"The first occurence of 3 is at "<<firstoccurence(array, 7, 3)<<endl;
    cout<<"The last occurence of 3 is at "<<lastoccurence(array, 8, 3)<<endl;
}