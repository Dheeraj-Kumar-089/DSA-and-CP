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

    vll a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vll dp(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j != 0)
                continue;

            if (a[j] < a[i])
                dp[i] = max(dp[i], 1 + dp[j]);

            if (a[i / j] < a[i])
                dp[i] = max(dp[i], 1 + dp[i / j]);
        }
    }

    cout << *max_element(all(dp)) << nl;
}

int32_t main()
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