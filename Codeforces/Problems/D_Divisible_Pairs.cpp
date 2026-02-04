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
    ll n, x, y;
    cin >> n >> x >> y;

    map<pair<ll, ll>, ll> remaindercnt;

    ll ans = 0;

    for (ll i = 0; i < n; ++i)
    {
        int currentval;
        std::cin >> currentval;

        ll remx = currentval % x;
        ll remy = currentval % y;

        ll targetremx = (x - remx) % x;
        ll targetremy = remy;

        pair<ll, ll> targetpair = {targetremx, targetremy};

        if (remaindercnt.count(targetpair))
        {
            ans += remaindercnt[targetpair];
        }

        pair<ll, ll> currentpair = {remx, remy};
        remaindercnt[currentpair]++;
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