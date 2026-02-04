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
    ll n, m;
    cin >> n >> m;

    vll a(m);
    for (auto &x : a)
        cin >> x;

    if (m == n)
    {
        cout << n << endl;
        return;
    }

    ll maximum = *max_element(all(a));
    ll minimum = *min_element(all(a));

    ll lastdifference = (n - maximum) + minimum - 1;

    vll difference;

    if (lastdifference != 0)
    {
        difference.push_back(lastdifference);
    }

    sort(all(a));

    for (ll i = 1; i < m; i++)
    {

        ll temp = abs(a[i] - a[i - 1] - 1);
        if ((temp) > 0)
        {
            difference.push_back(temp);
        }
    }

    sort(all(difference), greater<ll>());

    ll uninfected = 0;

    for (ll i = 0, j = 0; i < difference.size(); i++, j += 4)
    {
        difference[i] -= j;
        if (difference[i] > 2)
        {
            uninfected += (difference[i] - 1);
        }
        else if (difference[i] == 2 or difference[i] == 1)
        {
            uninfected += 1;
        }
        else
        {
            break;
        }
    }

    ll ans = n - uninfected;

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