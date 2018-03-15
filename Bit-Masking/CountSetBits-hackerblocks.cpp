#include<bits/stdc++.h>
using namespace std;

int countBits(int n){
    int number =0;
    
    while(n>0){
        number += (n&1);
        n = n>>1;
    }
    return number;
}
int main() {
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        cout<<countBits(n)<<endl;
    }
    
	return 0;
}