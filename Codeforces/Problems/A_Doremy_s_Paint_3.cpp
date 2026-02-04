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
    vll fs(2, 0);
    for (auto &x : v)
        cin >> x;

    unordered_map<ll, ll> m;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    if (m.size() == 2)
    {
        for (auto &x : m)
        {
            if (x.first != fs[0])
            {
                fs[0] = x.first;
            }
            fs[1] = x.first;
        }
        if ((m[fs[0]] == floor(n / 2.0) || m[fs[0]] == ceil(n / 2.0)) && (m[fs[1]] == floor(n / 2.0) || m[fs[1]] == ceil(n / 2.0)))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    else if (m.size() == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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