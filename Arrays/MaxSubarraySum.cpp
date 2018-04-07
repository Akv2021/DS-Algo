//Kadan's Algorithm: Maximum subarray array in O(n).
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //kadane's algorithm
    int cs = 0, //Current sum
        ms = 0; //Maximum sum
    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        
        ms = max(cs,ms);
    }
    
    cout<<ms<<endl;
    
    return 0;
}