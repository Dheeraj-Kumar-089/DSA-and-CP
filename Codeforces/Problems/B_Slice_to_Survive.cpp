#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int n){
    ll count = 0;
    while (n>1)
    {
        
        n = (n+1)/2;
        count++;
    }
    return count;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;



    while (t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        ll verticalcut = solve(min(m-(b-1),b))+solve(n)+1;
        ll horizontalcut = solve(min(n-(a-1),a))+solve(m)+1;
        cout<<min(verticalcut,horizontalcut)<<endl;

        
    }
    return 0; 
}
