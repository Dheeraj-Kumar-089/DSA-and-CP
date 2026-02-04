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

    ll winnings= 0;
    vll c[m];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {

            ll x;
            cin>>x;
            c[j].push_back(x);
        }
        
    }
    for (ll i = 0; i < m; i++)
    {
        sort(all(c[i]));
    }
    


    for (ll i = 0; i < m; i++)
    {
        vll res(n,0);
        res[n-1]=c[i][n-1];
        for (ll j = n-2; j >= 0; j--)
        {

            res[j]=c[i][j]+res[j+1];
        }
        
    

    for (ll j = 0; j < n-1; j++)
    {
        ll count = res[j+1] - (n-j-1)*c[i][j];
        winnings+=count;
    }
    
}


cout<<winnings<<endl;
    
    

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