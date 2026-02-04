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
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    unordered_map<int, int> mp;
    int maximum = 0;
    int maxdiff = 0;

    fil(i, 0, n)
    {
        if (a[i] % k != 0)
        {
            int difference = k - (a[i]%k);
            mp[difference]++;
            if (mp[difference] > maximum)
            {
                maximum = mp[difference];
                maxdiff = difference;
                
            }else if(mp[difference]==maximum){
                if (maxdiff < difference)
                {
                    maxdiff = difference;
                }
            }
        }
    }


    if (maxdiff == 0)
    {
        cout << 0 << nl;
        return;
    }
    cout << maxdiff + (maximum - 1) * k + 1 << nl;
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