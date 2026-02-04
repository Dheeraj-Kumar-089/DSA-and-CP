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

    vll a(n);
    for (auto &x : a)
        cin >> x;

    ll q;
    cin >> q;

    vll previousdistinct(n);
    previousdistinct[0] = -1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            previousdistinct[i] = previousdistinct[i - 1];
        }
        else
        {
            previousdistinct[i] = i;
        }
    }

    for (ll i = 1; i <= q; i++)
    {
        ll x, y;
        cin >> x >> y;


        if (previousdistinct[y-1]<x)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << y << " " << previousdistinct[y - 1]<<endl;
        }

    }

    cout<<endl;
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