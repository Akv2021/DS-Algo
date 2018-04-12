#include <bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n){
    
    //Checking for column
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }
    
    //Check for left diagonal
    int x = i;
    int y = j;
    
    while(x>=0&&y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;y--;
    }
    
    //Check for right diagonal
    x = i;
    y = j;
    
    while(x>=0&&y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;y++;
    }
    
    //Position is safe as all checks are done
    return true;
}

bool solveNQueen(int board[][10], int i, int n){
    //Base case
    if(i==n){
        //You have successfully placed queens in n rows (0...n-1)
        //Print the board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<" Q ";
                }else{
                    cout<<" : ";
                }
            }
            cout<<endl;
        }
        
        return true;
    }
    
    //Rec case
    //Try to place queen on current row.
    //And call on remaining part which will Be
    //Solved by recursion
    for(int j=0;j<n;j++){
        //Check if (i,j) position is safe for queen to be placed.
        if(isSafe(board, i, j, n)){
            //Place the queen assuming (i,j) is the right postion
            board[i][j] = 1;
            
            bool isNextQueenSafe = solveNQueen(board, i+1,n);
            if(isNextQueenSafe){
                return true;
            }
            
            //Means (i,j) is not the right position - Assumption is wrong
            board[i][j] = 0;
            
        }
    }
    //Tried for all positions in current row but could not place queen
    return false;
}

int main() {
    int n;
    cin>>n;
    
    int board[10][10] = {0};
    solveNQueen(board, 0, n);
    return 0;
}
