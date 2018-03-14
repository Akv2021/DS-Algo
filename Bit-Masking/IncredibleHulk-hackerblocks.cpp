#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n, levels;
    cin>>t;
    
    while(t--){
        cin>>n;
        levels = 0;
        
        while(n!=0){
            levels += n&1;
            n = n>>1;
        }
        cout<<levels<<endl;
    }
	return 0;
}