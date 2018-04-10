// Redundant Parentheses
#include <bits/stdc++.h>
using namespace std;

bool isRedundant(char exp[]){

    stack<char> s;
    
    for(int i=0;exp[i]!='\0';i++){
        char ch = exp[i];
        switch(ch){
            case ')': if(s.top()=='('){
                            return true;
                        }else{
                            while(s.top()!='('){
                                s.pop();
                            }
                            s.pop();
                            break;
                        }
            default: s.push(ch);            
        }            
    }
    return false;
}


int main() {
    char exp[] =  "(((a+b))+(c-d))" ;
    
    if(isRedundant(exp)){
        cout<<"yes: Redundant"<<endl;
    }else{
        cout<<"not Redundant"<<endl;
    }
    
}
