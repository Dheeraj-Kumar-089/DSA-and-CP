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

    string s;
    cin >> s;

    vll sheepPosition;

    fil(i, 0, n)
    {
        if (s[i] == '*')
        {
            sheepPosition.pub(i + 1);
        }
    }

    int k = sheepPosition.size();

    int ans = 0;
    int median = k >> 1;


    fil(i, 0, k)
    {
        int difference = abs(i - median);

        ans += abs(sheepPosition[i] - sheepPosition[median]) - difference;
    }

    cout << ans << nl;

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