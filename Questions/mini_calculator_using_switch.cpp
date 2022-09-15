#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of first element"<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of second element"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform(+, -, *, %, /): "<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<"Answer is = "<<a+b<<endl;
        break;

        case '-':
        cout<<"Answer is = "<<a-b<<endl;
        break;

        case '*':
        cout<<"Answer is = "<<a*b<<endl;
        break;

        case '%':
        cout<<"Answer is = "<<a%b<<endl;
        break;

        case '/':
        cout<<"Answer is = "<<a/b<<endl;
        break;

        default:
        cout<<"Please enter a valid operator";
    }

}