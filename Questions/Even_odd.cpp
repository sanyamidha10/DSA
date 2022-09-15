#include<iostream>
using namespace std;

// 1-even
// 2-odd
bool is_even(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(is_even(num)){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number.";
    }

}