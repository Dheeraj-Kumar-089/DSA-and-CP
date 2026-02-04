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
    int n,k;
    cin>>n>>k;

 
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

  
    for (int j = 1; j <= n; j++) {
        dp[1][j] = 1;
    }

    
    for (int i = 1; i < k; i++) { 
        for (int j = 1; j <= n; j++) { 
            if (dp[i][j] == 0) continue;

         
            for (int m = j; m <= n; m += j) {
                dp[i + 1][m] = (dp[i + 1][m] + dp[i][j]) % MOD;
            }
        }
    }

   
    int ans = 0;
    for (int j = 1; j <= n; j++) {
        ans = (ans + dp[k][j]) % MOD;
    }

    cout << ans << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}