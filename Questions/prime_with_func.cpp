#include<iostream>
using namespace std;

// 1-Prime
// 0-Not Prime

bool is_prime(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(is_prime(n)){
        cout<<"Prime number" ;       
    }
    else{
        cout<<"Not a prime number.";
    }
}