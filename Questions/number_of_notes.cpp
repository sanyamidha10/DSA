#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount to know the number of notes that it consists of: "<<endl;
    cin>>amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch(1){
        case 1:
        Rs100 = amount/100;
        amount = amount%100;
        cout<<"Number of Rs 100 notes are: "<<Rs100<<endl;

        case 2:
        Rs50 = amount/50;
        amount = amount%50;
        cout<<"Number of Rs 50 notes are: "<<Rs50<<endl;

        case 3:
        Rs20 = amount/20;
        amount = amount%20;
        cout<<"Number of Rs 20 notes are: "<<Rs20<<endl;

        case 4:
        Rs1 = amount/1;
        amount = amount%1;
        cout<<"Number of Rs 1 notes are: "<<Rs1<<endl;
        
    }
}