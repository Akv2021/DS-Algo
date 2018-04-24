// Sliding window problem. 
// Sum of a pair of numbers  == given number in O(n) time complexity.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int numOfPairs = 0;;
    sort(arr, arr+n);
    for(int i=0,j=n-1;i<j;){
        if(arr[i]+arr[j]==num){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
            numOfPairs++;
        }else if(arr[i]+arr[j] >num){
            j--;
        }else{
            i++;
        }
    }
    cout<<numOfPairs;
    return 0;    
}

