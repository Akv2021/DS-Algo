#include <bits/stdc++.h>
using namespace std;

void permute(char* in, int i){
    //Base case
    if(in[i]=='\0'){
        cout<<in<<endl;
        return;
    }
    //Recursive case
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permute(in, i+1);
        swap(in[i],in[j]); // To restore original array -> we swap again.
                           // This concept is called backtracking.
    }
    
}

int main() {
    char in[100];
    cin>>in;
    
    permute(in, 0);
    return 0;
}
