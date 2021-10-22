#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    
    int data;
    node* prev;
    node* next;
    
    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    
    node* n = new node(val);
    n->next = head;
    if(head != NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){
    
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    
    node* n = new node(val);
    node* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    
    delete todelete;
}

void deletion(node* &head, int pos){
    
    if(pos == 1){
        deleteAtHead(head);
    }
    
    node* temp = head;
    int count = 1;
    
    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
    }
    
    temp->prev->next = temp->next;
    
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

int intersection(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    
    int d = 0;
    node* ptr1;
    node* ptr2;
    
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }
    
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1-> data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    
    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    display(head1);
    display(head2);
    
    intersect(head1, head2, 3);
    cout<<intersection(head1, head2);
    
    return 0;
}