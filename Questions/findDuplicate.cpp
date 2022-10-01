#include<iostream>
using namespace std;

int findDuplicate(int array[], int size){
    int i;
    int j;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(array[i]==array[j] && i!=j){
                return array[i];
            }else{
                continue;
            }
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

    int ans = findDuplicate(array, size);
    cout<<"Printing the duplicate element"<<endl;
    cout<<ans;
}
