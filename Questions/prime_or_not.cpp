#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number :"<<endl;
    int n;
    cin>>n;

    int is_Prime = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            // cout<<"Not a prime number."<<endl;
            is_Prime = 0;
            break;
        }
    }

    if(is_Prime == 0){
        cout<<"Not a prime number.";
    }
    else{
        cout<<"Its a prime number.";
    }

}