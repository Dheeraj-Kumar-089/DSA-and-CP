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
    ll n,k,a,b;
    cin>>n>>k>>a>>b;

     vector<ll> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    
     ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);

    ll mins = 1e17 , mint = 1e17;
    for (int i = 1; i <= k; i++) {
        mins = min(mins, abs(x[a] - x[i]) + abs(y[a] - y[i]));
        mint = min(mint, abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }
    ans = min(ans, mins + mint);
    cout << ans << endl;
    
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