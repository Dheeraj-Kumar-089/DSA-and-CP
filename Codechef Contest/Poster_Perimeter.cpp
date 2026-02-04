#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int perimeter[n+1][m+1];
        int minimum = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                perimeter[i][j] = 2*(i+j);
                
                minimum = min(minimum,abs(perimeter[i][j] - k));
                
            }
            

        }

        cout<<minimum<<endl;
        
    }
    
    return 0;
}