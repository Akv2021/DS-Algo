#include<bits/stdc++.h>
using namespace std;

int findUniqueArray(int *arr, int n){
    int count[64] = {0};
    
    for(int i=0;i<n;i++){
        //Extract bits of each number -> add it to count array
        int j=0;
        int no = arr[i];
        while(no>0){
            count[j] += no&1;
            j++;
            no = no>>1;
        }
    }
    //Take mod of count array -> count%3 
    int p = 1;
    int ans = 0;
    for(int i=0;i<64;i++){
        count[i] %= 3;
        ans += count[i]*p;
        p = p<<1;
    }
    return ans;
}



int main() {
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findUniqueArray(arr, n);
    
	return 0;
}