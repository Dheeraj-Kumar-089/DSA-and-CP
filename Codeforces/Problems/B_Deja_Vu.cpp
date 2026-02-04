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

ll power(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}

void solve()
{
    ll n, q;
    cin >> n >> q;

    vll a(n);
    for (auto &x : a)
        cin >> x;
    vll b(q);
    for (auto &x : b)
        cin >> x;

    ll prev = 31;
    for (ll i = 0; i < q; i++)
    {
        if(b[i]>=prev) continue;
        ll val = pow(2,b[i]);
        for (ll j = 0; j < n; j++)
        {
            if(a[j]%val==0){
                a[j]+=(val/2);
            }
        }
        prev=b[i];
        
    }
    
    for (auto &x : a)
    {
        cout << x << " ";
    }
    cout << endl;
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