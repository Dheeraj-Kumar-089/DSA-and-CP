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

void solve()
{
    ll n, k;
    cin >> n >> k;

    vll c(n);
    for (auto &x : c)
        cin >> x;

    vll v[k+1];

    for (ll i = 1; i <= k; i++)
    {
        v[i].push_back(0);
    }
    

    for (ll i = 1; i <= n; i++)
    {
        
        v[c[i-1]].push_back(i);
    }

    for (ll i = 1; i <= k; i++)
    {
        v[i].push_back(n + 1);
    }

    ll ans = n + 1;
    for (ll i = 1; i <= k; i++)
    {
        ll z1 = 0;
        ll z2 = 0;
        for (ll j = 1; j < v[i].size(); j++)
        {
            ll difference = (v[i][j] - v[i][j - 1] - 1);
            if (difference > z1)
            {
                z2 = z1;
                z1 = difference;
            }
            else if (difference > z2)
            {
                z2 = difference;
            }
        }
        ans = min(ans, max(z2, (z1) / 2));
    }
    cout << ans << endl;
}

int main()
{
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