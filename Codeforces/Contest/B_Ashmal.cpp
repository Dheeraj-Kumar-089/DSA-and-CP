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

    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string temp=a[0];
    deque<string> dq;
    dq.pub(a[0]);
    for (int i = 1; i < n; i++) {

        if (a[i] + temp <= temp + a[i]) {
            dq.push_front(a[i]);
            temp = a[i] + temp;
        } else {
            dq.push_back(a[i]);
            temp = temp + a[i];
        }
    }

    string ans;
    for (auto &s : temp)
    {
        ans += s;
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