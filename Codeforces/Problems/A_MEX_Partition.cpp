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
    unordered_map<ll, ll> mp;

    vll a(n);
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    if (mp.find(0) == mp.end())
    {
        cout << 0 << endl;
        return;
    }

    for (ll i = 1; i < 100; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << i << endl;
            return;
        }
    }
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