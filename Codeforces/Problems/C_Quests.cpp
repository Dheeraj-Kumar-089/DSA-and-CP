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
    ll n,k;
    cin>>n>>k;

    vll a(n);
    for(auto &x:a) cin>>x;
    vll b(n);
    for(auto &x:b) cin>>x;

    ll maximum = 0;
    ll sum = 0;
    ll ans = 0;

    for (ll i = 0; i < min(n,k); i++)
    {
        sum+=a[i];
        maximum = max(maximum,b[i]);
        ans=max(ans,sum+(k-i-1)*maximum);
    }

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