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

    vll a(n);
    for (auto &x : a)
        cin >> x;

    vll prefixsum(n);
    prefixsum[0] = a[0];

    for (ll i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + a[i];
    }

    ll maxsum = 0;
    for (ll k = 1; k <= n; k++)
    {
        if (n % k != 0)
            continue;


        ll j = 0;
        ll maximum = 0;
        ll minimum = LLONG_MAX;

        while (j < n)
        {
            ll sum = prefixsum[j] - prefixsum[j - k];
            if (j == 0)
            {
                sum = prefixsum[k - 1];
                j = k - 1;
            }
            maximum=max(maximum,sum);
            minimum = min(minimum,sum);
            maxsum = max(maxsum, maximum - minimum);
            j += k;
        }
    }

    cout << maxsum << endl;
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