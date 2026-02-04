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

    vll a(n);
    for(auto&x:a) cin>>x;

    if (n == 1) {
        cout << 0 << nl;
        return;
    }


    vll prefixsum(n, 0);
   int absum = 0;
    for (int i = 1; i < n; ++i) {
        absum += abs(a[i]);
        prefixsum[i] = absum;
    }

    
    vll suffixsum(n+1,0);
    for (int i = n - 1; i >= 0; --i) {
        suffixsum[i] = suffixsum[i + 1] - a[i];
    }

 
   int maxans = LLONG_MIN; 

    for (int k = 0; k < n; ++k) {
       int curr = 0;

        if (k == 0) {
            curr = suffixsum[1];
        } else {

            curr = a[0] + prefixsum[k - 1] + suffixsum[k + 1];
        }

        maxans = max(maxans, curr);
    }

    cout << maxans << nl;
    
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