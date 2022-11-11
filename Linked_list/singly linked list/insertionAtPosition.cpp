#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;

}



void insertAtPosition(node* &tail, node* &head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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
    node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    insertAtPosition(tail, head, 3, 22);

    printingLL(head);
}