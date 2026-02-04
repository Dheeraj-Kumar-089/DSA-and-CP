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
    int a, b;
    cin >> a >> b;

    int maxlayers = 0;
    for (int j = 1; j <= 40; j++) {
        int oddsum = 0;  
        int evensum = 0; 

        for (int i = 0; i < j; i++) {
            if ((i&1) != 0) oddsum += (1LL << i);
            else evensum += (1LL << i);
        }

        if ((oddsum <= a && evensum <= b) || (oddsum <= b && evensum <= a)) {
            maxlayers = j;
        } else {
            break; 
        }
    }
    cout << maxlayers << nl;
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