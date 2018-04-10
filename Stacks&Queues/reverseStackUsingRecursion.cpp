// Reversing a stack.
// Implicit stack - recursion
// Explicit stack - stack
#include <bits/stdc++.h>
using namespace std;

void printStack(stack<int> s){
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

// Using a temporary stack to insertAtBottom
void insertAtBottom(stack<int> &s, int topElement){
    
    stack<int> temp;
    while(s.empty()){
        temp.push(s.top());
        s.pop();
    }
    s.push(topElement);
    
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

// Using Implicit stack i.e. recursion to insertAtBottom
void insertAtBottomRec(stack<int> &s, int topElement){
    if(s.empty()){
        s.push(topElement);
        return;
    }
    //Rec case
    int temp = s.top();
    s.pop();
    insertAtBottomRec(s, topElement);
    s.push(temp);
}

void reverseStack(stack<int> &s){
    //Base case
    if(s.empty()){
        return;
    }
    
    //Rec case
    int topElement = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottomRec(s, topElement);
}

int main() {
    
    stack<int> s;
    for(int i=0;i<10;i++){
        s.push(i+1);
    }
    
    reverseStack(s);
    printStack(s);
    return 0;
}
