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

ll power(ll exp)
{
    ll result = 1;
    for (ll i = 1; i <= exp; i++)
    {
        result *= 10;
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;

    vll ans;

    for (ll i = 1; i <= 19; i++)
    {
        ll denominator = (power(i) + 1);
        ll divisor = n / denominator;
        if (divisor * denominator == n)
        {
            ans.push_back(divisor);
        }
        else if (divisor <= 0)
        {
            break;
        }
    }

    if (ans.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {

        cout << ans.size() << endl;
        for (ll i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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