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
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> st;

    fil(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
            st.insert({x, y});
        else
            st.insert({y, x});
    }

    unordered_map<int, set<int>> mp;

    for (auto &pair : st)
    {

        mp[pair.first].insert(pair.second);
    }

    int ans = 0;
    vll temp(n + 1, 0);
    temp[n] = n + 1;

    fdl(i, n - 1, 1)
    {
        if (mp.find(i) != mp.end())
        {
            temp[i] = min(*mp[i].begin(), temp[i + 1]);
            ans += temp[i] - i;
        }
        else
        {

            temp[i] = min(n + 1, temp[i + 1]);
            ans += temp[i] - i;
        }
    }

    cout << ans + 1 << endl;
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