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
    int a, b, k;
    cin >> a >> b >> k;

    unordered_map<int, int> mpc;
    unordered_map<int, int> mpd;

    vll c(k);
    for (auto &x : c)
    {
        cin >> x;
        mpc[x]++;
    }

    vll d(k);
    for (auto &x : d)
    {
        cin >> x;
        mpd[x]++;
    }
    int ans = 0;

    fil(i,0,k-1){

        int x = mpc[c[i]]-1;
        int y = mpd[d[i]]-1;
        int possiblePair = k-x-y-1-i;

        ans += possiblePair;
        mpc[c[i]]--;
        mpd[d[i]]--;

    }
    cout<<ans<<nl;
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