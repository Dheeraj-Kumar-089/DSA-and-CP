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
    int n;
    cin >> n;

    if (n % 2 == 0) {
        
        int k = n / 2;
        cout << (k + 1) * (k + 1) << endl;
    } else {
        int k = (n - 1) / 2;
        cout << 2 * (k + 1) * (k + 2) << endl;
    } 
}



int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}