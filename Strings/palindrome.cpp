#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int isPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowercase(name[s]) != toLowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }

    int n = count;

    int ans = isPalindrome(name, n);
    if(ans){
        cout<<"Yes, it's a palindrome!";
    }
    else{
        cout<<"No, it's not a palindrome!";
    }

}