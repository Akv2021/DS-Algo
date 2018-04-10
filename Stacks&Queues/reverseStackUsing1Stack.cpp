// Reverse Stack using 1 extra stack.
#include <bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1, stack<int>& s2, int n ){
    for(int i=0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int> &s){
    
    stack<int> s2;
    int n = s.size();
    for(int i=0;i<n;i++){
        int x = s.top();
        s.pop();
        transfer(s, s2, n-i-1);
        s.push(x);
        transfer(s2, s , n-i-1);
    }
}


int main() {
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    reverseStack(s);
    
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    
    return 0;
}
