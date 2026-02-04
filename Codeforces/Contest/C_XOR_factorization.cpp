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

    vll ans(k,0);
    vector<bool> tl(k, false);

    int msbidx = floor(log2(n));

    if (k & 1)
    {
        fil(i, 0, k)
        {
            ans[i] = n;
        }
    }
    else
    {

        int m = k - 1;

        while (msbidx >= 0)
        {
            if (n & (1LL << msbidx))
            {
                fil(l, 0, k)
                {

                    if (l == m)
                    {
                        tl[l] = true;
                        
                    }
                    else
                    {
                        ans[l] |= (1LL << msbidx);
                    }
                }

                m--;
                
                if (m < 0) m = k - 1;
            }
            else
            {
                int loose = 0;
                fil(l, 0, k) if (tl[l]) loose++;

                int toset = (loose % 2 == 0) ? loose : loose - 1;

                int filled = 0;
                fil(l, 0, k)
                {
                    if (tl[l] && filled < toset)
                    {
                        ans[l] |= (1LL << msbidx);
                        filled++;
                    }
                }
            }
            msbidx--;
        }
    }

    reverse(all(ans));

    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << nl;
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