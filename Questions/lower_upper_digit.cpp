#include<iostream>
using namespace std;

int main(){
    cout<<"Enter input value: "<<endl;

    char input;
    cin>>input;

    if(input>='A' && input<='Z'){
        cout<<input<<" is an uppercase alphabet.";
    }
    else if(input>='a' && input<='z'){
        cout<<input<<" is a lower case alphabet.";
    }

    else{
        cout<<input<<" is a digit";
    }
}