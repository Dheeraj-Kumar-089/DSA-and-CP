#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    ll n, c; 
    cin >> n >> c;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll l = 1, r = 1e9,ans=-1;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        ll sum_all = 0;
        for(ll i = 0; i < n; ++i) {
            sum_all += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sum_all > c) break;
        }
        if(sum_all <= c) {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

int main(){
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