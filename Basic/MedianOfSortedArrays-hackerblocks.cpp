#include<bits/stdc++.h>
using namespace std;

void merge(int a1[], int a2[], int a3[], int n){
    int i=0,j=0,k=0;
    
    while(i<n&&j<n){
        if(a1[i]<a2[j]){
            a3[k++] = a1[i++]; 
        }else{
            a3[k++] = a2[j++];
        }
    }
    
    if(i==n){
        while(j!=n){
            a3[k++] = a2[j++];
        }
    }
    
    if(j==n){
        while(i!=n){
            a3[k++] = a1[i++];
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a1[n], a2[n];
    
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    
    int a3[2*n];
    merge(a1, a2, a3, n);
    
    cout<<(a3[n] + a3[n-1])/2;
    
    
	return 0;
}