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

const int MAXN = 1e6;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;

    vector<bool> isRemoved(n + 1, false);

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            if (s[j - 1] == '1')
                break;

            if (isRemoved[j])
                continue;
            else
            {
                isRemoved[j] = true;
                ans += i;
            }
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