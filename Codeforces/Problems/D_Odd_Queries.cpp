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
    ll n, q;
    cin >> n >> q;

    vll array(n);
    for (auto &x : array) cin >> x;

    ll totalsum = accumulate(array.begin(), array.end(), 0LL);

    vll prefixsum(n);

    prefixsum[0] = array[0];

    for (ll i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + array[i];
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll segmentsum=0;
        if(l==1) segmentsum = prefixsum[r-1];
        else segmentsum = prefixsum[r - 1] - prefixsum[l - 2];
        ll newsegmentsum = (r - l + 1) * k;
        ll aftersum = totalsum - segmentsum + newsegmentsum;

        if (aftersum % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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