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

bool isGreater(ll a, ll b)
{
    return a > b;
}

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    if (is_sorted(all(a)))
    {
        cout << 0 << endl;
        return;
    }
    if (a[n - 2] > a[n - 1] or a[n - 1] < 0)
    {
        cout << -1 << endl;
        return;
    }

    ll difference = a[n - 2] - a[n - 1];
    cout << n - 2 << endl;

    for (ll i = 0; i < n - 2; i++)
    {

        cout << i + 1 << " " << n - 1 << " " << n;
        cout << endl;
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