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
    ll ans = 0;

    vll a(n);
    for (auto &x : a){
        cin >> x;
        ans+=x;
    }


    

    ll lastallindex = -1;
    ll lastallval = 0;

    unordered_map<ll, ll> lastchangeposition;

    for (ll i = 0; i < n; i++)
    {
        lastchangeposition[i] = 0;
    }

    for (ll i = 1; i <= q; i++)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll index, x;
            cin >> index >> x;
            index--;

            if (lastchangeposition[index] > lastallindex)
            {
                ans += (x - a[index]);
            }
            else
            {
                ans += (x - lastallval);
            }
            a[index] = x;

            lastchangeposition[index] = i;
            cout << ans << endl;
        }
        else
        {
            ll x;
            cin >> x;
            lastallval = x;
            lastallindex = i;
            ans = n * x;
            cout << ans << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}