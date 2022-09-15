#include<iostream>
using namespace std;

int power_function(int base, int power){
    int answer = 1;
    for(int i=1; i<=power; i++){
        answer = answer*base;
    }

    return answer;
}

int main(){
    int base;
    cout<<"Enter the base value: "<<endl;
    cin>>base;

    int power;
    cout<<"Enter the power value: "<<endl;
    cin>>power;

    int answer = power_function(base, power);
    cout<<answer;

}