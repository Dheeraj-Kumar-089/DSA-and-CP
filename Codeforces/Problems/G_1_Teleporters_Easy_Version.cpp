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
    ll n,c;
    cin>>n>>c;

    vll a(n);
    for(auto&x:a) cin>>x;
    
    vll b(n);
    for (ll i = 0; i < n; i++)
    {
        b[i]=a[i]+i+1;
    }

    sort(all(b));

    vll prefixsum(n);
    prefixsum[0] = b[0];


    for (ll i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + b[i];
    }

    ll ans = upper_bound(all(prefixsum),c) - prefixsum.begin();
    cout<<ans<<endl;

    
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