#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()


void solve()
{
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    if (n == 1)
    {
        if (a[0] == 1)
        {
            a[0] += k;
        }

        cout << a[0] << endl;
        return;
    }

    if (k & 1)
    {
        for (int i = 0; i < n; i++)
        {
            while (a[i] & 1)
            {
                a[i] += k;
            }
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            a[i]=a[i] + (a[i]%(k+1))*k;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int32_t main()
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