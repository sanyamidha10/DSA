#include<iostream>
using namespace std;
#include<string>

char maxOccuringCharacter(string s){
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        if(ch >='a' &&  ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }

        arr[number]++;
    }

    int max =-1;
    int ans =0;
    for(int i=0; i<26; i++){
        if(arr[i] > max){
            ans = i;
            max = arr[i];
        }   
    }

    return 'a'+ans;
}

int main(){
    string s;
    cout<<"Enter your string"<<endl;
    cin>>s;

    char ans = maxOccuringCharacter(s);
    cout<<ans;
}