#include <bits/stdc++.h>
using namespace std;

class Stack{
    private: 
        class Node{
            public:
                int data;
                Node* next;
                Node(int data){
                    this->data = data;
                    this->next = NULL;
                }
        };
        
        Node* head;
        int numberOfElements;
    public: 
        Stack(){
            head = NULL;
            numberOfElements =0;
        }
        
        void push(int x){
            Node* n = new Node(x);
            n->next = head;
            head = n;
            numberOfElements++;
        }
        
        void pop(){
            if(head==NULL){
                return;
            }else{
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            numberOfElements--;
        }
        
        void printStack(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
        
        int top(){
            if(empty()) return -1;
            return head->data;
        }
        
        bool empty(){
            return head==NULL;
        }
        
        int size(){
            return numberOfElements;
        }
        
        ~Stack(){
            while(head){
                Node* ahead = head->next;
                delete head;
                head = ahead;
            }
        }
};


int main() {
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.printStack();
    cout<<s.size();
    return 0;
}
