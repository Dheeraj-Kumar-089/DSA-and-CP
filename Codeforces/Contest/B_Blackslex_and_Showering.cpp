#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
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
    int maximum = 0;

    int totaldistance = 0;
    fil(i,0,n-1){
        totaldistance += abs(a[i+1]-a[i]);

    }

    fil(i,0,n){
        int prev = ((i==0)?0:abs(a[i]-a[i-1])) + ((i==n-1)?0:abs(a[i+1]-a[i]));
        int neww = (i==0 || i==n-1)?0:abs(a[i+1]-a[i-1]);
        int diff = prev - neww;
        maximum = max(maximum,diff);
    }

    cout<< totaldistance - maximum<<nl;

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