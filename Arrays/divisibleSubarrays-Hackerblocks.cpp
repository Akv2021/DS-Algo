//Divisible Subarrays: Number of subarrays, such that, subarray sum/N = 0.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int prefixSum[n+1] = {0};
    prefixSum[0] = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        sum %= n;
        sum = (sum+n)%n;
        prefixSum[sum]++;
    }
    
    int ans = 0;
    
    for(int i=0;i<=n;i++){
        // cout<<prefixSum[i]<<" ";
        int num = prefixSum[i];
        ans += (num*(num-1))/2;
    }
    
    cout<<ans;
    
    
    return 0;
}