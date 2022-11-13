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
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(node* &tail, int element, int data){
    if(tail==NULL){
        node* newNode = new node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    else{
        node* curr = tail;
        while(element!=curr->data){
            curr = curr->next;
        }

        node* temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(node* &tail, int value){
    if(tail==NULL){
        cout<<"NO node in list, please check";
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // single node
        if(curr == prev){
            tail = NULL;
        }

        // >=2nodes
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printingLL(node* tail){
    node* temp = tail;

    if(tail== NULL){
        cout<<"list is empty";
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    node* tail = NULL;

    insertNode(tail, 5, 3);
    printingLL(tail);

    insertNode(tail, 3, 5);
    printingLL(tail);

    insertNode(tail, 5, 7);
    printingLL(tail);

    insertNode(tail, 7, 9);
    printingLL(tail);

    insertNode(tail, 3, 6);
    printingLL(tail);

    insertNode(tail, 9, 10);
    printingLL(tail);

    insertNode(tail, 10, 100);
    printingLL(tail);

    deleteNode(tail, 3);
    printingLL(tail);


}