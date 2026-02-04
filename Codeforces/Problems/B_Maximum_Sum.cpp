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

    vll v(n);
    for (auto &x : v)
        cin >> x;
    sort(all(v));

    vll prefix(n, 0);
    prefix[0] = v[0];
    for (ll i = 1; i < n; ++i)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    ll maximum = 0;
    for (ll i = 0; i <= k; i++)
    {
        ll second = k - i;
        ll left = 2*i;
        ll right = n-second-1;
        ll ans = prefix[right]-(left==0?0:prefix[left-1]);
        maximum=max(maximum,ans);

    }

    cout << maximum << endl;
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