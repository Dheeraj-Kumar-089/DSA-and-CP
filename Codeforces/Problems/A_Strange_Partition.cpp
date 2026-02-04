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
    ll n,x;

    cin>>n>>x;

    vll v(n);

    for(auto &x:v) cin>>x;

    ll minimum=0;
    ll maximum=0;

    for (int i = 0; i < n; i++)
    {
        maximum+=ceil((v[i]*1.0)/x);
        minimum+=v[i];
    }

    minimum = ceil((minimum*1.0)/x);

    cout<<minimum<<" "<<maximum<<endl;
    
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