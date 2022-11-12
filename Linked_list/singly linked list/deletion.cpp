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

    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"destructor called for "<<value<<endl;
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


void insertAtPosition(node* &head, node* &tail, int position, int d){
    if(position == 1){
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

void deleteAtPosition(int position, node* &head){
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }


    else{
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPosition(head, tail, 4, 22);
    deleteAtPosition(1, head);

    printingLL(head);



}