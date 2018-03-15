#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin>>a;
    for(unsigned int s=0;s<a.length();s++){
        if(islower(a[s]))a[s] = toupper(a[s]);
        else a[s] = tolower(a[s]);
    }
    
    cout<<a;
    
    
	return 0;
}