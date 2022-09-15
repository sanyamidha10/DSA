#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    int answer = numerator/denominator;
    return answer;
}

int main(){
    int n, r;
    cout<<"Enter the velue of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of r: "<<endl;
    cin>>r;

    int main_answer = ncr(n, r);
    cout<<"Answer is "<<main_answer;
}