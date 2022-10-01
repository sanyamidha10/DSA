#include<iostream>
using namespace std;

int findUnique(int array[], int size){
    int i;
    int j;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(array[i]==array[j] && i!=j){
                break;
            }
        }

        if(j == size){
                return array[i];
            }
    }
}



   int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int array[100];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int ans = findUnique(array, size);
    cout<<ans;
}
