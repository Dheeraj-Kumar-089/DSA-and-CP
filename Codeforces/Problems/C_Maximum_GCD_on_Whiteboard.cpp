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
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    sort(all(a));
    int ans = 1;

    map<int, int> freq;
    int mingcd = 0;
    for (int i = 0; i < n; i++)
    {
        mingcd = __gcd(mingcd, a[i]);
        freq[a[i]]++;
    }

    int maxelement = a[n - 1];

    for (int gcd = mingcd; gcd <= maxelement; gcd++)
    {

        int count = 0;
        int idx = lower_bound(all(a), gcd * 4) - a.begin();
        count += (n - idx);

        if (idx == n)
        {
            idx--;
            for (int j = gcd; j <= a[idx]; j += gcd)
            {

                if (freq.find(j) != freq.end())
                {
                    count += freq[j];
                }
            }
        }
        else
        {

            for (int j = gcd; j < a[idx]; j += gcd)
            {

                if (freq.find(j) != freq.end())
                {
                    count += freq[j];
                }
            }
        }

        if ((n - k) <= count)
        {
            ans = max(ans, gcd);
        }
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