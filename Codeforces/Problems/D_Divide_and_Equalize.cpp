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

void primeFactors(ll n, unordered_map<ll, ll> &primecount)
{

    while (n % 2 == 0)
    {
        primecount[2]++;
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            primecount[i]++;
            n /= i;
        }
    }
    if (n > 1)
        primecount[n]++;
}

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    unordered_map<ll, ll> primecount;

    for (ll i = 0; i < n; i++)
    {
        primeFactors(a[i], primecount);
    }

    for (auto &pair : primecount)
    {
        
        if ((pair.second % n) != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
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