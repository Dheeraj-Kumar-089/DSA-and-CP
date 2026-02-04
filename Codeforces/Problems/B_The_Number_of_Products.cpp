#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fil(i, x, n) for (int i = x; i < n; i++)
#define fdl(i, x, n) for (int i = x; i >= n; i--)
#define nl endl

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (auto &x : a)
        cin >> x;

    int odd = 0, even = 1;
    bool cur = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            cur = 1 - cur;

        if (cur == 0)
        {
            ans += even;
            even++;
        }
        else
        {
            ans += odd;
            odd++;
        }
    }

    cout << 1LL * n * (n + 1) / 2 - ans << " " << ans << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}