#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number upto which you want to print fib series: "<<endl;
    int n;
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n; i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;

    }
    
}