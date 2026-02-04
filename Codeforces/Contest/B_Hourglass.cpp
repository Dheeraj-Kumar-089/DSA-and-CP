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
    int s, k, m;
    cin >> s >> k >> m;

    if (s > k)
    {
        if(((m/k)%2)==0) cout<<s-m%k<<endl;
        else cout<<k-m%k<<endl;
        return;
    }
    else
    {
        int t = m % k;
        if (t >= s)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << s - t << endl;
            return;
        }
    }
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