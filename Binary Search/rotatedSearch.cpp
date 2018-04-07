//Finding position of key in rotated sorted array
//using binary search

#include <bits/stdc++.h>
using namespace std;


int searchIn(int arr[], int key, int s, int e){
    //base case
    if(s>e){
        return -1;
    }
    
    //recursion case
    int mid = (s+e)/2;
    
    if(arr[mid]==key){
        return mid;
    }
    
    //Mid lies in the first line
    if(arr[s]<=arr[mid]){
        if(arr[s]<=key&& key<=arr[mid]){
            return searchIn(arr, key, s, mid-1);
        }else{
            return searchIn(arr, key, mid +1, e);
        }
    }
    
    //Mid lies in the second line
    if(key>=arr[mid] && key<=arr[e]){
            return searchIn(arr, key, mid+1, e);
    }
    return searchIn(arr, key, s, mid-1);
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<searchIn(arr, key, 0, n-1);
    return 0;
}