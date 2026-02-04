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
    ll n;
    cin >> n;

    vector<vector<ll>> a(n);

    ll totalsum = 0;
    ll minofmin = INT_MAX;

    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            a[i].push_back(x);
        }

        sort(a[i].begin(), a[i].end());

        totalsum += a[i][1];
        minofmin = min(a[i][0], minofmin);

    }

    ll maximum = 0;

    for (ll i = 0; i < n; i++)
    {

        ll sum = totalsum - a[i][1];
        sum += minofmin;

        maximum = max(sum, maximum);
    }

    cout<<maximum<<endl;
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