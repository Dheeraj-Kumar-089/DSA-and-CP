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
    ll n, x;
    cin >> n >> x;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    sort(all(a));

    if(n==1){
            cout<<x+a[0]<<endl;
            return;
        }

        vll prefix(n, 0);
        prefix[0]=a[0];
        for (ll i = 1; i < n; ++i) {
        prefix[i] = prefix[i-1] + a[i];
    }

    ll low = a[0], high = a.back() + x / n + 10, ans = a[0];

    while (low <= high) {
        ll mid = (low + high) / 2;

        auto it = lower_bound(all(a), mid);
        ll index = it - a.begin();

        ll needed = 0;
        if(index>0) needed = mid * index - prefix[index-1];

        if (needed <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
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