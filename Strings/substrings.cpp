#include <bits/stdc++.h>
using namespace std;

void printSubstrings( char* a){
    
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;a[j]!='\0';j++){
            for( int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}



int main() {
    
    char a[] = "abc";

    
    printSubstrings(a);
    cout<<a<<endl;
}
