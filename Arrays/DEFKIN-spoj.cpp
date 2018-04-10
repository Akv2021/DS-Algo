// Concept involved: sorting
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int w,h,n;
    cin>>t;
    
    while(t--){
        cin>>w>>h>>n;
        int x[n] = {0},
            y[n] = {0};
            
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];        
        }
        sort(x, x+n);
        sort(y, y+n);
        int xmax = x[0]-1, ymax = y[0]-1;
        for( int i=0;i<n-1;i++){
            xmax = max(xmax, x[i+1] - x[i] - 1);
            ymax = max(ymax, y[i+1] - y[i] - 1);
            
        }
        xmax = max(xmax, w-x[n-1]);
        ymax = max(ymax, h-y[n-1]);
        // cout<<xmax<<" "<<ymax;
        cout<<xmax*ymax<<endl;
    }
    
    
}
