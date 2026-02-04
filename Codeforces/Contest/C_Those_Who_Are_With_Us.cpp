#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    ll n,m;
    cin>>n>>m;

    ll matrix[n][m];
    ll maximum=0;
    ll row = 0;
    ll column = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
            if(maximum<matrix[i][j]) {
                maximum=matrix[i][j];
                row = i;
                column = j;

            }
        }
        
    }
    if(m!=1 || (n==1 && m==1)){
    for (ll j = 0; j < m; j++)
    {
        matrix[row][j]-=1;
    }
}
    if(n!=1){
    for (ll i = 0; i < n; i++)
    {
        if(matrix[row][column]!=matrix[i][column]) matrix[i][column]-=1;
    }
}


    maximum=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if(maximum<matrix[i][j]) {
                maximum=matrix[i][j];
            }
        }
        
    }
    cout<<maximum<<endl;

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}