#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    
    node* next;
    int data;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtEnd(node* &head, int val){
    
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    
    while(temp->next != head){
        temp = temp->next;
    }
    
    temp->next = n;
    n->next = head;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    display(head);
    
    insertAtHead(head, 5);
    display(head);
}