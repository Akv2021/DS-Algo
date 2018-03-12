#include <bits/stdc++.h>
using namespace std;


bool checksum(int subset, int match, int arr[], int n){

    int i=0;
    int sum=0;
    while(subset>0 && i<n){
        sum += (subset&1)*arr[i];
        subset = subset>>1;
        i++;
    };
    if(sum==match) return true;
    return false;
}

void generateSubsets(int n, int arr[], int m){
    
    bool isTrue = false;
    int range = 1<<n;
    for(int k=0; k<range; k++){
        if(checksum(k, m, arr, n)){
            isTrue = true;
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return;
    
}


int main() {
    int t,n,m;
    
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n] = {0};
      
        for (int i=0; i<n; i++){
          cin>>arr[i];
        }
      
        generateSubsets(n, arr, m);
    };
}
