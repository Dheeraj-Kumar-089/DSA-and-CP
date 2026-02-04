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
    ll a, b, k;
    cin >> a >> b >> k;

    if (k >= a and k >= b)
    {
        cout << 1 << endl;
        return;
    }

    if (k == 1)
    {
        if (a != b)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
            return;
        }
    }


    if (max(a, b) / __gcd(a, b) <= k)
    {
        cout << 1 << endl;
        return;
    }

    cout<<2<<endl;
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