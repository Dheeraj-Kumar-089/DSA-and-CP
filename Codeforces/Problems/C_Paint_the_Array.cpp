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
    {
        cin >> x;
    }

    ll gcd1 = a[0];
    for (ll i = 2; i < n; i += 2)
    {
        gcd1 = __gcd(a[i], gcd1);
    }
    bool flag = true;
    for (ll i = 1; i < n; i += 2)
    {
        if ((a[i] % gcd1) == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout<<gcd1<<endl;
        return;
    }

    ll gcd2 = a[1];
    for (ll i = 3; i < n; i += 2)
    {
        gcd2 = __gcd(a[i], gcd2);
    }

    for (ll i = 0; i < n; i += 2)
    {
        if ((a[i] % gcd2) == 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    cout << gcd2 << endl;
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