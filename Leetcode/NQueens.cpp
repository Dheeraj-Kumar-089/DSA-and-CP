class Solution {
public:

    bool isSafe(int row,int col,vector<string>& board,int n){
        for(int i=0;i<row;i++){ //check row
            if(board[i][col]=='Q') return false;
        }
        for(int j=0;j<col;j++){ //check column
            if(board[row][j]=='Q') return false;
        }
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){ //check left diagonal
            if(board[i][j]=='Q') return false;
        }
        for(int i=row,j=col;i>=0 && j<n;i--,j++){ //check right diagonal
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void solveNQueens(int row,int n,vector<string>& board,vector<vector<string>>& ans){
        if(row==n){
            ans.push_back({board}); //push current board to ans
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,board,n)){ //if it is safe to place queen
                board[row][col]='Q'; //place queen
                solveNQueens(row+1,n,board,ans); //recurse for next row
                board[row][col]='.'; //backtrack
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.')); //create board of nxn with all elements as '.'
        solveNQueens(0,n,board,ans);
        return ans;
    }
};




#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int> nums={1,2,3};

    return 0;
}   