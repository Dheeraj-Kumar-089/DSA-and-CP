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

    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    ll ans = 0;

    sort(all(a));

    ll maximumsum = 2 * n;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {

            ll product = a[i].first * a[j].first;
            if (product > maximumsum)
                break;
            ll sum = a[i].second + a[j].second;
            if (product == sum)
            {
                ans++;
            }
        }
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