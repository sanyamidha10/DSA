#include<iostream>
using namespace std;
void reverse(char name[], int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    int count = 0;
    for(int i=0; name[i]!=0; i++){
        count++;
    }

    reverse(name, count);
    cout<<"Reverse of your name is "<<name;
}