#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int a[100000];
int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        a[i] = n-i;
    }
    
    //Estimate built in quick sort time
    clock_t s = clock();
    sort(a,a+n);
    clock_t e = clock();
    
    cout<<e-s;
    
    return 0;
}
