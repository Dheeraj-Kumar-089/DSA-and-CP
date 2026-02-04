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

    vll a(n+1);
    fil(i,1,n+1){
        cin>>a[i];
    }
    
    int l=1;
    int r=k+1;

    int i = 1;
    int ans = 0;
    while (r<n+1)
    {
        if(a[i]<(2*a[i+1])){
            i++;
            if(i==r){
                ans++;
                l++;
                r++;
            }
        }else{

            l=++i;
            r=l+k;
            
        }
        
    }
    cout<<ans<<nl;
    
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