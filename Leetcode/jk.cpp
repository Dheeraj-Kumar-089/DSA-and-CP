#include <bits/stdc++.h>
using namespace std;
#define nl "\n"       
#define ll long long
 
void solve() {
    int n;
    ll x, y;
    cin >> n >> x >> y;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll S = accumulate(a.begin(), a.end(), 0LL);
    ll low = S - y;  
    ll high = S - x;
    
    sort(a.begin(), a.end());
    
    ll count = 0;
    for (int i = 0; i < n; i++) { 
       
        ll tlow = low - a[i];   
        ll thigh = high - a[i];
        
        
        int left = upper_bound(a.begin() + i + 1, a.end(), thigh) - a.begin();    
        int right = lower_bound(a.begin() + i + 1, a.end(), tlow) - a.begin(); 
        
        count += left - right;  
    }
    
    cout << count << nl;
}
 
int main() {
    ios::sync_with_stdio(false);  
    cin.tie(0);  
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}