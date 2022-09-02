#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value in farhenheit: "<<endl;
    float F;
    cin>>F;

    float C;
    C = (F - 32) * 5/9;
    cout<< C;
}