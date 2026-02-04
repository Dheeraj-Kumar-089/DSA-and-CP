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

    vll v(n);
    for (auto &x : v) cin >> x;



    vector<ll> res;
    for (ll i = 0; i < n - 1; i++)
    {

        ll val = v[i] - v[i + 1];
        if (val != 0)
        {
            if (res.size() > 0)
            {
                ll x = res.back();
                if (x > 0 && val < 0)
                {
                    res.push_back(val);
                }
                else if (x < 0 && val > 0)
                {
                    res.push_back(val);
                }

            }
            else{
                    res.push_back(val);
                }
            
        }
    }

    cout<<(1+res.size())<<endl;
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