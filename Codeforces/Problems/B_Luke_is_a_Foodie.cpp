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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
            cin >> a[i];
 
        vector<pair<ll, ll>> segments(n);
        for (int i = 0; i < n; i++) 
            segments[i] = {a[i] - x, a[i] + x};
        
        ll ans = 0;
        ll l = segments[0].first;
        ll r = segments[0].second;
        for (int i = 1; i < n; i++) 
        {
            l = max(l, segments[i].first);
            r = min(r, segments[i].second);
            if (l > r)
            {
                ans++;
                l = segments[i].first;
                r = segments[i].second;
            }
        }
        cout << ans << endl;
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