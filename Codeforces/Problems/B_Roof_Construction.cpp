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
    ll n;
    cin>>n;

    ll msb = log2(n-1);
    ll powermsb = pow(2,msb);
    
    for (ll i = powermsb - 1; i >= 0; i--)
    {
        cout<<i<<" ";
    }
    for (ll i = powermsb; i < n; i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    
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