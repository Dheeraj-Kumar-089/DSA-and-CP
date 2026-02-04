#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fil(i, x, n) for (int i = x; i < n; i++)
#define fdl(i, x, n) for (int i = x; i >= n; i--)
#define nl endl


void solve()
{
    int n, k;
    cin >> n >> k;

    int minpile = n;
    int maxpile = n;
    int count = 0;

    if (n == k) {
        cout << 0 << nl;
        return;
    }
    if (k > n) {
        cout << -1 << nl;
        return;
    }

    while (maxpile > k) { 
        
        minpile = minpile / 2; 
        maxpile = (maxpile + 1) / 2; 
        
        count++;

        if (k >= minpile && k <= maxpile) {
            cout << count << nl;
            return;
        }

    }


    cout<< -1 <<nl;
    
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