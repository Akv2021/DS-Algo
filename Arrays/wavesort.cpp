//Wave sort
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //Go to every 2nd element and try to create a peak
    for(int i=0;i<n;i+=2){
        
        //Check for left element
        if(i>0 && a[i-1]>a[i]){
            swap(a[i], a[i-1]);
        }
        
        //Check for right element
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i], a[i+1]);
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}