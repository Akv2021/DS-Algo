#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int key, int n){
    int s=0, e = n-1, mid, ans = -1;
    while(s<=e){
        mid = (s+e)/2;
        if(key == arr[mid]){
            ans = mid;
            e = mid - 1;
        }else if(key <= arr[mid]){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}

int upperBound(int arr[], int key, int n){
    int s=0, e = n-1,mid, ans = -1;
    while(s<=e){
        mid = (s+e)/2;
        if(key == arr[mid]){
            ans = mid;
            s = mid + 1;
        }else if(key <= arr[mid]){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, t, element;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cin>>t;
    
    while(t--){
        cin>>element;
        cout<<lowerBound(arr, element, n)<<" "<<upperBound(arr, element, n)<<endl;
    }
    
	return 0;
}