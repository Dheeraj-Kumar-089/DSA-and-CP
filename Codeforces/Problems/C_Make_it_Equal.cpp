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
    ll n, k;
    cin >> n >> k;

    vll s(n);
    for (auto &x : s)
        cin >> x;

    vll t(n);
    for (auto &x : t)
        cin >> x;

    vll moduluss(n);
    for (ll i = 0; i < n; i++)
    {
        moduluss[i] = (s[i] % k);
    }

    map<ll, ll> modulust;
    for (ll i = 0; i < n; i++)
    {
        ll tmp=(t[i] % k);
        modulust[tmp]++;
    }

    map<ll, ll> check;

    for (ll i = 0; i < n; i++)
    {
 
        ll temp = k - moduluss[i];


        if (modulust.find(moduluss[i]) != modulust.end())
        {
            if(modulust[moduluss[i]]>check[moduluss[i]]){
            
            check[moduluss[i]]++;
            continue;}
        }
        if (modulust.find(temp) != modulust.end())
        {
            check[temp]++;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (modulust == check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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