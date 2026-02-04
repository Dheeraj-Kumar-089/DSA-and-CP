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
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if ((a ^ 1) > b)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;

    if (y < x)
    {
        while (a != b)
        {

            if ((a & 1) == 0 || (a + 1) > b)
            {
                a = a ^ 1;
                ans += y;
            }
            else
            {
                a = a + 1;
                ans += x;
            }
        }
    }

    if (x <= y)
    {
        if (b > a)
        {
            cout << (b - a) * x << endl;
        }else{
            cout<<y<<endl;
        }
    }
    else
    {
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