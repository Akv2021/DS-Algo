#include<bits/stdc++.h>
using namespace std;

bool isValidConfig(int books[], int n, int m, int ans){
    int students =1;
    int currentPages = 0;
    
    for(int i=0;i<n;i++){
        
        if(currentPages + books[i] > ans){
            currentPages = books[i];
            students++;
            if(students>m){
                return false;
            }
        }else{
            currentPages += books[i];
        }
    }
    return true;
}

int binarySearchBooks(int books[], int n, int m, int totalPages){
    int s=books[n-1] , e= totalPages;
    
    int finalAns = 0;
    while(s<=e){
        int mid = (s+e)/2;
        
        if(isValidConfig(books, n, m, mid)){
            //true
            finalAns = mid;
            e= mid-1;
        }else{
            //false
            s= mid+1;
        }
    }
    return finalAns;
}


int main() {
    int t;
    int n,m;
    cin>>t;
    
    while(t--){
       cin>>n>>m;
       int arr[n];
       int totalPages = 0;
       for(int i=0;i<n;i++){
           cin>>arr[i];
           totalPages += arr[i];
       }
       
       cout<<binarySearchBooks(arr, n, m, totalPages)<<endl;
       
        
    }
	return 0;
}