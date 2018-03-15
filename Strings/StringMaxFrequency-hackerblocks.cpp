#include<bits/stdc++.h>
using namespace std;

void frequency(string s, int a[]){
    
    for(unsigned int i=0;i<s.length();i++){
        char c = s[i];
        int num = c - 'a';
        a[num]++;
    }
    
}
int main() {
    string s;
    int max = 0, index = 0;
    cin>>s;
    int a[26] = {0};
    
    frequency(s, a);
    
    for(int i=0;i<26;i++){
        if(a[i]>max){
            index = i;
            max = a[i];
        }
    }
    char c = 'a' + index;
    cout<<c;
	return 0;
}