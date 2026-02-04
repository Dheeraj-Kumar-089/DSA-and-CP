#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()


vector<ll> pairs[1001];
void solve()
{
    ll n;
    cin >> n;

    vector<ll> idx(1001, 0);
    for (ll i = 1; i <= n; ++i) {
        ll x;
        cin >> x;
        idx[x] = i;
    }
    ll ans = -1;
    for (ll i = 1; i <= 1000; ++i) {
        if (idx[i] == 0) {
            continue;
        }
        for (ll j : pairs[i]) {
            if (idx[j] != 0) {
                ans = max(ans, idx[i] + idx[j]);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (__gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}