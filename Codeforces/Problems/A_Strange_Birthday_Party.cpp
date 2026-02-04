#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n, m;
    cin >> n >> m;

    vll k(n);
    for (auto &x : k)
        cin >> x;

    vll c(m);
    for (auto &x : c)
        cin >> x;

    sort(all(k),greater<int> ());
    int ans = 0;


    for (int i = 0; i < n; i++)
    {
        
        if (k[i] <= (i))
                ans += c[k[i] - 1];
            else
                ans += c[i];
    }


    cout << ans << endl;
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
