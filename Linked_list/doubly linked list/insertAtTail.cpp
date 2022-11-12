#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;

}

void printingLL(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    printingLL(head);
}