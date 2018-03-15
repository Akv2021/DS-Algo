#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin>>a;
    char c;
    
    for(unsigned int s=0;s<a.length();s++){
        
        if(s%2==0){
            char c = a[s] - 1;
            a[s]++;
        }else{
            a[s]--;
        }
    }
    
    cout<<a;
    
    
	return 0;
}