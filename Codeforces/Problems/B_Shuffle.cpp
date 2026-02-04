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
    int n, x, m;
    cin >> n >> x >> m;

    int left = x, right = x;

    for (int i = 0; i < m; i++)
    {
        int y, z;
        cin >> y >> z;

        if (z >= left && y <= right)
        {
            left = min(left, y);
            right = max(right, z);
        }
    }

    cout << right - left + 1 << endl;
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