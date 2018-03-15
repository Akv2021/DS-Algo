#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    bool isPal = true;
    cin>>a;
    unsigned int e = a.length()-1;
    for(unsigned int s=0;s<e;s++,e--){
        if(a[s]!=a[e]) isPal = false;
    }
    (isPal)?cout<<"true":cout<<"false";
    
    
	return 0;
}