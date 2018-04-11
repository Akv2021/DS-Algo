#include <bits/stdc++.h>
using namespace std;

void towerOFHanoi(int n, char src, char dest, char helper){
    //Base case
    if(n==0){
        return;
    }
    
    //Rec case
    //1. Move n-1 disks from src to helper
    towerOFHanoi(n-1, src, helper, dest);
    
    cout<<"Move disk: "<<n<<" from "<<src<<" to "<<dest<<endl;
    
    towerOFHanoi(n-1, helper, dest, src);
}


int main() {
    int n;
    cin>>n;
    towerOFHanoi(n, 'A', 'C', 'B');
    return 0;
}
