#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this-> next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int getLength(node* &head){
    node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}


void printLL(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* node1 = new node(10);

    node* head = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 20);

    cout<<"length of linked list is "<<getLength(head)<<endl;
    printLL(head);






}