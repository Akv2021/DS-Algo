// Working with Linked List.
// Author: himanshu 
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(int data){
            this->data = data;
            next = NULL;
        }
  
};

int length(node *head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}


void insertAtHead(node *&head, int data){
    
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int data){
    
    if(head == NULL){
        head = new node(data);
        return;
    }
    
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    node *n = new node(data);
    n->next = NULL;
    temp->next = n;
}


// Inserting after pos number of nodes.
// So if pos =1, insert after 1 node.
void insertAtPos(node *&head, int data, int pos){
    
    if(head==NULL || pos == 0){
        insertAtHead(head, data);
    }else if(pos>length(head)){
        insertAtTail(head, data);
    }else{
        node *temp = head;
        pos--; 
        while(pos!=0){
            temp = temp->next;
            pos--;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}



void printLinkedList(node *head){
    
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}


bool searchRecursive(int data, node *head){
    //base case
    if(head==NULL){
        return false;
    }
    //Recursive case
    if(head->data==data){
        return true;
    }else{
        searchRecursive(data, head->next);
    }
}


void deleteAtHead( node *&head){
    
    if(head==NULL){
        return;
    }else{
        node *temp = head;
        head = temp->next;
        delete temp;
        return;
    }
}

void deleteAtTail(node *&head){
    
    if(head==NULL){
        return;
    }else{
        node *prev = NULL;
        node *current = head;
        while(current->next!=NULL){
            prev = current;
            current = current->next;
        }
        prev->next = NULL;
        delete current;
        return;
    }
}

void deleteInTheMiddle(node *&head, int pos){
    
    if(head==NULL || pos<1){
        return;
    }else if(pos>length(head)){
        return;
    }else{
        node *prev = NULL;
        node *current = head;
        pos--;
        while(pos!=0){
            prev = current;
            current = current->next;
            pos--;
        }
        prev->next = current->next;
        delete current;
        return;
    }
}

void buildList(node*&head){
    
    int data;
    cin>>data;
    while(data!=-1){
        insertAtTail(head, data);
        cin>>data;
    }
}

void reverse(node *&head){
    node* prev = NULL;
    node* curr = head;
    node* ahead;
    
    while(curr!=NULL){
        //Save the next node to work upon
        ahead = curr->next;
        //point the current node to previous
        curr->next = prev;
        //Update prev and current
        prev = curr;
        curr = ahead;
    }
    head = prev;
}

//Operator overloading to emulate Printlist using <<
//and >> to emulate buildList.

istream& operator>>(istream &is, node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &is, node*&head){
    printLinkedList(head);
    return is;
}

int main() {
    node* head = NULL;
    node*head2 = NULL;
    
    
    cin>>head>>head2;
    cout<<head<<endl<<head2;
    reverse(head);
    cout<<head;
    // insertAtHead(head, 3);
    // insertAtHead(head, 4);
    // insertAtHead(head, 5);
    // insertAtTail(head, 6);
    // insertAtPos(head, 13,1);
    // printLinkedList(head);
    
    // if(searchRecursive(13, head)){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
    
    // deleteAtHead(head);
    // deleteAtTail(head);
    // insertAtTail(head, 111);
    // deleteInTheMiddle(head, 3);
    // printLinkedList(head);
    
    // buildList(head);
    
    // printLinkedList(head);
    
    return 0;
}
