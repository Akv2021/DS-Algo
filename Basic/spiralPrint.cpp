#include <bits/stdc++.h>
using namespace std;

void printSpiral( int a[][4], int R, int C){
    
    int startrow = 0,
        endrow = R-1,
        startcol = 0,
        endcol = C-1;
        
        while(startrow<=endrow && startcol<=endcol){
            
            //Print start row
            for(int i=startcol;i<=endcol;i++){
                cout<<a[startrow][i]<<" ";
            }
            startrow++;
            
            //Print end column
            for(int i=startrow;i<=endrow;i++){
                cout<<a[i][endcol]<<" ";
            }
            endcol--;
            
            //Print end row - Make sure it is printed if endrow>startrow
            if(endrow>startrow){
            for(int i=endcol;i>=startcol;i--){
                cout<<a[endrow][i]<<" ";
            }
            endrow--;
            }
            
            //Print start column
            if(endcol>startcol){
            for(int i=endrow;i>=startrow;i--){
                cout<<a[i][startcol]<<" ";
            }
            startcol++;
            }
            
            
        }
}

int main() {
    
    int a[4][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    printSpiral(a, 4, 4);
}
