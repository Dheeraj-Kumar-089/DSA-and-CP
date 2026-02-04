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
    {
        cin >> x;
    }
    if(k>=3){
        cout<<0<<endl;
        return;
    }

    int minimum = *min_element(all(a));

    int ans = minimum;

    vll difference;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            difference.push_back(abs(a[i] - a[j]));
        }
    }

    sort(all(difference));

    ans = min(minimum, difference[0]);

    if (k == 2)
    {

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(difference.begin(), difference.end(), a[i]);

            if (it != difference.end())
            {
                ans = min(ans, abs(*it - a[i]));
            }

            if (it != difference.begin())
            {
                --it;
                ans = min(ans, abs(*it - a[i]));
            }
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