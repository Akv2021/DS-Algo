#include<bits/stdc++.h>
using namespace std;

int decimalToOctal(int n)
{
    int octal = 0;
    int rem, i = 1;
    while (n != 0){
        rem = n % 8;
        octal += rem * i;
        i *= 10;
        n /= 8;
    }
    
    return octal;
}

int main() {
    int n;
    cin>>n;
    cout<<decimalToOctal(n);
    
	return 0;
}