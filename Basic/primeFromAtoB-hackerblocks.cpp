#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int limit = sqrt(n);
    for(int j=2;j<=limit;j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}

int allCountries(int arr[]){
    arr[0] = 0;
    arr[1] = 0;
    for(int i=2;i<1000001;i++){
        if(isPrime(i)) arr[i] = 1;
    }
}

int main() {
    int t, a, b;
    cin>>t;
    int arr[1000001] = {0};
    allCountries(arr);    
    
    while(t--){
        cin>>a>>b;
        int count = 0;
        for(int j=a; j<=b; j++){
            count += arr[j];
        }
        cout<<count<<endl;
        
        
    }
	return 0;
}