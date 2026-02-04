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

int dfs(int node, vector<vector<int>> &adj, int &ans, string &s)
{
    int count = (s[node - 1] == 'W') ? 1 : -1;

    for (auto it : adj[node]) {
        count += dfs(it, adj, ans, s);
    }

    if (count == 0)
        ans++;

    return count;

}


void solve()
{
    int n;
    cin >> n;

    vll a(n - 1);
    for (auto &x : a)
        cin >> x;
    string s;
    cin >> s;

    vector<vector<int>> adj(n + 1, vector<int>());

    for (int i = 0; i < n - 1; i++)
    {

        adj[a[i]].push_back(i + 2);
    }

    int ans = 0;
    dfs(1, adj, ans, s);


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