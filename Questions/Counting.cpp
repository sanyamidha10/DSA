#include<iostream>
using namespace std;

void print_counting(int n){
    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number upto which you want to print counting: "<<endl;
    cin>>n;

    print_counting(n);

}