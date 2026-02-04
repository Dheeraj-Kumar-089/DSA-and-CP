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

    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<bool>> isvisited(n, vector<bool>(n, false));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {

            if (isvisited[i][j] == false)
            {

                unordered_map<char,ll> freq;

                vector<pair<ll, ll>> cells = {
                    {i, j},
                    {j, n - 1 - i},
                    {n - 1 - i, n - 1 - j},
                    {n - 1 - j, i}};

                for (auto &c : cells)
                {
                    ll x = c.first, y = c.second;
                    if (!isvisited[x][y])
                    {
                        freq[grid[x][y]]++;

                        isvisited[x][y] = true;
                    }
                }
                ans += min(freq['0'], freq['1']);
            }
        }
    }

    cout << ans << "\n";
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