#include <iostream>
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

void insertAtTail(node* &tail, int d){
        node* temp = new node(d);
        tail->next = temp;
        tail = temp;       
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
    insertAtTail(tail, 14);
    insertAtTail(tail, 17);
    insertAtTail(tail, 100);

    printingLL(head);
    
}