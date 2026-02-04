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

    ll a, b;
    cin >> a >> b;
    ll ra = a;
    ll rb = b;
    while (ra % 2 == 0) ra /= 2;
    while (rb % 2 == 0) rb /= 2;

    if (ra != rb)
        cout << -1 << endl;
    else
    {
        a /= ra;
        b /= rb;
        a = log2(a);
        b = log2(b); 
        ll ans = ceil(abs(a - b) / 3.0);
        cout << ans << endl;
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