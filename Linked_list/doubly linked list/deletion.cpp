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

    ~node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for "<<value<<endl;
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

void deleteAtPosition(int position, node* &head){
    if(position == 1){
       node* temp = head;
       temp->next->prev = NULL;
       head = temp->next;
       temp->next = NULL;
       delete temp;
    }


    else{
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
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

    

    insertATHead(head, 0);
    insertATHead(head, 5);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    insertAtPosition(head, tail, 5, 25);

    // cout<<head;
    // cout<<tail;

    deleteAtPosition(4, head);
    printingLL(head);
}