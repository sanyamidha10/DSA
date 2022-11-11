#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp ->next = head;
    head = temp;
}

void printingLL(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

int main(){
    node* node1 = new node(10);

    node* head = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 17);
    insertAtHead(head, 100);
    printingLL(head);

}