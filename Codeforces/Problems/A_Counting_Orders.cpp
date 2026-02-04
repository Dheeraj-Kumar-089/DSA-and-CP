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

    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(), a.end());

    vector<ll> b(n);
    for(auto &x:b) cin>>x;
    sort(b.rbegin(), b.rend());

    ll result = 1;
    for (ll i = 0; i < n; i++) {
        ll temp=upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll count = a.size() - temp;
        result = result * max(count - i, 0LL) % MOD;
    }
    cout << result << endl;
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