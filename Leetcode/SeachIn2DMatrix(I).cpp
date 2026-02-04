class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) { //O(logm + logn)
        int m=mat.size();
        int n=mat[0].size(); //n is number of columns
        
        int startRow = 0,endRow = m-1;
        while (startRow <= endRow) //O(logm)
        {
            int midRow = startRow + (endRow - startRow)/2;

            if (target >= mat[midRow][0] && target <= mat[midRow][n-1]) //O(logn)
            {
                int startCol = 0,endCol = n-1;
                while (startCol <= endCol) //O(logn)
                {
                    int midCol = startCol + (endCol - startCol)/2; 
                    if (mat[midRow][midCol] == target) //if target found
                    {
                        return true;
                    }
                    else if (mat[midRow][midCol] < target) //if target is greater than mid element
                    {
                        startCol = midCol + 1;
                    }
                    else
                    {
                        endCol = midCol - 1;
                    }
                }
                return false;
            }
            else if (target < mat[midRow][0]) //if target is less than first element of midRow
            {
                endRow = midRow - 1;
            }
            else
            {
                startRow = midRow + 1;
            }
            
            
        }
     
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    

    return 0;
}   