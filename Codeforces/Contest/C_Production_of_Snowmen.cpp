#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fil(i,x,n) for (int i = x; i < n; i++)
#define fdl(i,x,n) for (int i = x; i >= n; i--)
#define nl endl

void solve(){
    int n;
    cin>>n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];

    int countAB = 0;

    for (int s = 0; s < n; ++s) {
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] >= b[(i + s) % n]) {
                ok = false;
                break;
            }
        }
        if (ok) countAB++;
    }

    int countBC = 0;

    for (int s = 0; s < n; ++s) {
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (b[i] >= c[(i + s) % n]) {
                ok = false;
                break;
            }
        }
        if (ok) countBC++;
    }

    cout << n * countAB * countBC << nl;
    
}

int32_t main(){
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