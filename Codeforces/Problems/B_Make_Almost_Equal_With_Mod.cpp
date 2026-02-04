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
    cin>>n;

    vll arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = 0;

    for (ll i = 1; i <= 60; i++)
    {

        set<ll> distinctValues;
        ll k = 1LL << i;

        for (ll ind = 0; ind < n; ind++)
        {
            distinctValues.insert(arr[ind] % k);
        }

        if (distinctValues.size() == 2)
        {
            ans = k;
            break;
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
