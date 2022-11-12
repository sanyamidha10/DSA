#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};

void insertATHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node* &head, node*&tail, int position, int data){
    if(position==1){
        insertATHead(head, data);
        return;
    }

    node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    node* nodeToInsert = new node(data);
    // temp->next = nodeToInsert;
    // nodeToInsert->prev = temp;
    // temp->next->prev = nodeToInsert;
    // nodeToInsert->next = temp->next;

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


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

    insertATHead(head, 0);
    insertATHead(head, 5);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    insertAtPosition(head, tail, 5, 25);
    printingLL(head);
}